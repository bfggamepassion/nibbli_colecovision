#include <coleco.h>
#include <getput1.h>
#include "fonctions.h"


#define INACTIF     204
#define INVISIBLE   203

#define HORIZONTAL  0
#define VERTICAL    1

#define HAUT    0
#define BAS     1
#define GAUCHE  2
#define DROITE  3

#define WORKFLOW_TITLE      0
#define WORKFLOW_MENU       1
#define WORKFLOW_INGAME     2
#define WORKFLOW_LOOSE_LIFE 3
#define WORKFLOW_GAMEOVER   4
#define WORKFLOW_NEXTLEVEL  5

#define true 1
#define false 0
#define NULL 0x0

#define LOOP_ON 1
#define LOOP_OFF 0
/* VARIABLES GESTION DE LA MUSIQUE */
byte loopMusic;

unsigned int G_TickCount = 0;
unsigned int G_LastTick = 0;
unsigned int G_count = 0;
unsigned int G_ATATTick = 0;
unsigned int G_ATATTickShoot = 0;
unsigned int G_KILLTick = 0;

extern const void direct_sound(byte sound);
extern const byte music_gameover[];
extern const byte music1[];
extern const byte music2[];
extern const byte music_nextlevel[];
extern const byte music_looselife[];
extern const byte sfx_eat[];

void startmusic(unsigned char *pDat,byte loop);
void startsfx(unsigned char *pDat);


volatile char vola=0;
volatile unsigned char *pPlayList=NULL;		// audio playlist
volatile unsigned char *pPlayListForLoop=NULL;		// audio playlist
unsigned char nPlayDelay=1;
volatile unsigned char *pSfxList=NULL;		// sfx audio playlist
unsigned char nSfxDelay=1;
const byte snd_table[]={0};
byte *current_music;
/* FIN VARIABLES GESTION DE LA MUSIQUE */

extern const byte  COLOR1RLE[];
extern const byte  COLOR2RLE[];
extern const byte  COLOR3RLE[];
extern const byte  COLOR4RLE[];
extern const byte  COLOR5RLE[];


/* PROCEDURES MUSIQUE */
void stopmusic() {
	pPlayList=NULL;
	pPlayListForLoop=NULL;
	pSfxList=NULL;
	direct_sound(0x9F);
	direct_sound(0xBF);
	direct_sound(0xDF);
	direct_sound(0xFF);
}

void mutemusic()
{
	direct_sound(0x9F);
	direct_sound(0xBF);
	direct_sound(0xDF);
	direct_sound(0xFF);
}

void sound_nmi(void)
{
	unsigned char nDat;

	if (NULL != pPlayList) {
		nPlayDelay++;
		if (nPlayDelay == *(pPlayList))
		{
    		while (nPlayDelay==*(pPlayList))
			{
				nDat=*(++pPlayList);

				if (0 == nDat) {

					if (loopMusic==LOOP_OFF) {pPlayList=NULL;mutemusic();}
					else {pPlayList=pPlayListForLoop;nPlayDelay=(*pPlayListForLoop)-1;}
					break;
				}
				switch (nDat&0x90) {
					case 0x80:		// load sample
						//audport=nDat;
						//audport=*(++pPlayList);
						direct_sound(nDat);
						if ((nDat&0xe0) != 0xe0) direct_sound(*(++pPlayList));
						break;
					case 0x90:		// load volume
						//audport=nDat;
						direct_sound(nDat);
						break;
					default:		// don't know what this is, should abort
						pPlayList=NULL;
						break;
				}
				// point to next frame count
				pPlayList++;
			}
		}
	}

}



void startmusic(unsigned char *pDat,byte loop) {
	// order here is important
	loopMusic = loop;
	if (NULL != pPlayList) {
		stopmusic();
	}

	nPlayDelay=(*pDat)-1;
	pPlayList=pDat;
	pPlayListForLoop=pDat;

}

void startsfx(unsigned char *pDat) {
	// order here is important
	//pauseMusic=1;

	if (NULL != pSfxList) {
		pSfxList=NULL;
	}

	nSfxDelay=(*pDat)-1;
	pSfxList=pDat;


}
/* FIN PROCEDURES MUSIQUE */


extern const byte LEVEL1_NAMERLE[];
extern const byte LEVEL2_NAMERLE[];
extern const byte LEVEL3_NAMERLE[];
extern const byte LEVEL4_NAMERLE[];
extern const byte LEVEL5_NAMERLE[];
extern const byte IMAGE[];

extern const byte LEVEL_PATTERNRLE[];
extern const byte LEVEL_COLORRLE[];
extern const byte SPATTERNRLE[];

static const byte yellow_font[8]= { 0xa1,0xb1,0xe1,0xf1,0xe1,0xb1,0xa1,0xa1};
static const byte red_font[8]= { 0x61,0x61,0x81,0x91,0x91,0x81,0x61,0x61};


const byte pills=101;
const byte vide=32;

const byte corps_direction[] =
{
    96,97,98,99
};

const byte tete_direction[] =
{
    112,113,114,115
};

const byte queue_direction[] =
{
    104,105,106,107
};

/*
      0
     2+3
      1
*/

byte workflow;
byte ticks;
char direction = 3;
char direction_demandee = 3;
char dirx;
char diry;
byte grossit;

byte level_delay;
byte facteur_gross;
byte current_level;
byte nb_pills;
unsigned int score;
int time;
byte nblives;

byte d;

byte xt,yt;
byte xq,yq;

void renderLife(void)
{
	char *pointage;
	pointage = str(nblives);

    print_at(4+14,23,"WORMS:");
    put_char(10+14,23,pointage[3]);
    put_char(11+14,23,pointage[4]);
}

void renderWave(void)
{
	char *pointage;
	pointage = str(current_level+1);

    print_at(4+1,23,"WAVE:");
    put_char(9+1,23,pointage[3]);
    put_char(10+1,23,pointage[4]);
}

void setYellowColor(void)
{
		put_vram_pattern (coltab+65*8,yellow_font,8,26);
		put_vram_pattern (coltab+2048+65*8,yellow_font,8,26);
		put_vram_pattern (coltab+4096+65*8,yellow_font,8,26);
}

void setRedNumber(void)
{
		put_vram_pattern (coltab+48*8,red_font,8,10);
		put_vram_pattern (coltab+2048+48*8,red_font,8,10);
		put_vram_pattern (coltab+4096+48*8,red_font,8,10);
}

void checkControl()
{
    byte test;
    if ((joypad_1&LEFT) && (dirx==0))
    {
        disable_nmi();test = get_char(xt-1,yt);enable_nmi();
        if ((test==32) || (test==101))
        {
            direction=2;
            dirx=-1;
            diry=0;
        }
    }
    else if ((joypad_1&RIGHT) && (dirx==0))
    {
        disable_nmi();test = get_char(xt+1,yt);enable_nmi();
        if ((test==32) || (test==101))
        {
            direction=3;
            dirx=1;
            diry=0;
        }
    }
    else if ((joypad_1&UP) && (diry==0))
    {
        disable_nmi();test = get_char(xt,yt-1);enable_nmi();
        if ((test==32) || (test==101))
        {
            direction=0;
            dirx=0;
            diry=-1;
        }
    }
    else if ((joypad_1&DOWN) && (diry==0))
    {
        disable_nmi();test = get_char(xt,yt+1);enable_nmi();
        if ((test==32) || (test==101))
        {
            direction=1;
            dirx=0;
            diry=1;
        }
    }

}

void comptePills(void)
{
    byte x,y;
    nb_pills=0;
    for (x=0;x<32;x++)
    {
        for (y=0;y<24;y++)
        {
            if (get_char(x,y)==101) {nb_pills++;}
        }
    }

}

void efface_serpent(void)
{
    byte cx,cy,sortie,cc;
    cx = xq;
    cy = yq;
    sortie=0;

    while (sortie==0)
    {
        delay(4);
        disable_nmi();
        cc = get_char(cx,cy);
        if (
            (cc==112) ||
            (cc==113) ||
            (cc==114) ||
            (cc==115)
            )
        {
            put_char(cx,cy,32);
            sortie = 1;
        }
        else
        {
            put_char(cx,cy,32);

            if ((cc==96) || (cc==104)) cy-=1;
            if ((cc==97) || (cc==105)) cy+=1;
            if ((cc==98) || (cc==106)) cx-=1;
            if ((cc==99) || (cc==107)) cx+=1;
        }
        enable_nmi();
    }
}

 void animate(byte xt,byte yt,byte direction)
 {
     if (direction==3)
     {

        sprites[0].x = xt<<3;
        sprites[0].y = yt<<3;
        sprites[0].pattern = 0;
        sprites[0].colour = 8;
        put_vram (0x1b00,sprites,128);
        delay(1);
        sprites[0].pattern = 4;
        put_vram (0x1b00,sprites,128);
        delay(1);
        sprites[0].pattern = 8;
        put_vram (0x1b00,sprites,128);
        delay(1);

     }
 }

void gestion_nextLevel()
{
            delay(1);
            SCREEN_OFF
            rle2vram(SPATTERNRLE,sprtab);
            LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL1_NAMERLE,0,chrtab);
            setYellowColor();
            setRedNumber();
            center_string(12,"GET READY FOR NEXT LEVEL");
            SCREEN_ON
			startmusic(music_nextlevel,LOOP_ON);
            while(time>0)
            {
                score+=1;
                time-=1;
                delay(1);
                print_at(12-4,14,"BONUS :");
                print_at(21-4,14,str(time));

                print_at(12-4,16,"SCORE :");
                print_at(21-4,16,str(score));

                if  ((joypad_1 & FIRE2) || (joypad_1 & FIRE1))
                {
                    score+=time;
                    time=0;
                }
            }
                print_at(12-4,14,"BONUS :");
                print_at(21-4,14,str(time));

                print_at(12-4,16,"SCORE :");
                print_at(21-4,16,str(score));
			stopmusic();
            pause();
            current_level++;

            SCREEN_OFF
            if ((current_level%5)==0)
            {
                if (current_level<8) level_delay--;
                else if (current_level<12) facteur_gross++;
                else if (current_level<16) level_delay--;
                else facteur_gross++;

                LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL1_NAMERLE,1,chrtab);
				loadColor(COLOR1RLE);
                current_music = music1;
            } else if ((current_level%5)==1)
            {
                LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL2_NAMERLE,1,chrtab);
				loadColor(COLOR2RLE);
                current_music = music2;
            } else if ((current_level%5)==2)
            {
                LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL3_NAMERLE,1,chrtab);
				loadColor(COLOR3RLE);
                current_music = music1;
            } else if ((current_level%5)==3)
            {
                LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL4_NAMERLE,1,chrtab);
				loadColor(COLOR4RLE);
                current_music = music2;
            } else if ((current_level%5)==4)
            {
                LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL5_NAMERLE,1,chrtab);
				loadColor(COLOR5RLE);
                current_music = music1;
            }

            setYellowColor();
            setRedNumber();
            comptePills();

            xq=14;
            yq=21;

            xt = xq+4;
            yt = 21;

            put_char(xq, yq,queue_direction[DROITE]);
            put_char(xq+1, yq,corps_direction[DROITE]);
            put_char(xq+2, yq,corps_direction[DROITE]);
            put_char(xq+3, yq,corps_direction[DROITE]);
            put_char(xq+4, yq,tete_direction[DROITE]);

            direction=3;
            direction_demandee=3;
            dirx=1;
            diry=0;
            time=990;
            renderWave();
            renderLife();
            /*print_at(10+1,23,"WAVE:");
            print_at(15+1,23,str(current_level+1));*/

            SCREEN_ON
}

void main(void)
{
    byte nq,nq2;
    byte a;
    byte test,test2,test3,test4,nbtest;
    byte sortie;

    workflow = WORKFLOW_TITLE;

    nb_pills = 0;

    while(1)
    {
        switch(workflow)
        {
        case WORKFLOW_TITLE:
            SCREEN_OFF
            initSprites();
            stopmusic();
            current_music = music1;
            screen_mode_2_bitmap();
            show_picture(IMAGE);
            SCREEN_ON
            delay(20);
            pause();

            SCREEN_OFF

            screen_mode_2_text();
            rle2vram(SPATTERNRLE,sprtab);
            /*LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL1_NAMERLE,1,chrtab);
            comptePills();

            xq=14;
            yq=21;

            xt = xq+4;
            yt = 21;

            put_char(xq, yq,queue_direction[DROITE]);
            put_char(xq+1, yq,corps_direction[DROITE]);
            put_char(xq+2, yq,corps_direction[DROITE]);
            put_char(xq+3, yq,corps_direction[DROITE]);
            put_char(xq+4, yq,tete_direction[DROITE]);

            grossit=0;
            direction=3;
            direction_demandee=3;
            dirx=1;
            diry=0;
            nblives=3;
            score=0;
            time=990;*/
            SCREEN_ON

            workflow = WORKFLOW_MENU;
            break;
        case WORKFLOW_MENU:
            stopmusic();

            workflow = WORKFLOW_INGAME;


            SCREEN_OFF
            rle2vram(SPATTERNRLE,sprtab);
            LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL1_NAMERLE,0,chrtab);
			setYellowColor();
			setRedNumber();
            center_string(5,"CHOOSE DIFFICULTY :");
            center_string(7,"1 - EASY");
            center_string(8,"2 - NORMAL");
            center_string(9,"3 - HARD");
            SCREEN_ON

            sortie=0;
            while (sortie==0)
            {
                if (keypad_1==1)
                {
                    score=0;
                    current_level=0;
                    facteur_gross=1;
                    level_delay=7;
                    sortie = 1;
                } else if (keypad_1==2)
                {
                    score=0;
                    current_level=0;
                    facteur_gross=1;
                    level_delay=5;
                    sortie = 1;
                } else if (keypad_1==3)
                {
                    score=0;
                    current_level=0;
                    facteur_gross=2;
                    level_delay=4;
                    sortie = 1;
                }
            }

            SCREEN_OFF
            LoadPatternAndshowAScreen(LEVEL_PATTERNRLE,LEVEL_COLORRLE,LEVEL1_NAMERLE,1,chrtab);
            setYellowColor();
            setRedNumber();
            comptePills();

            xq=14;
            yq=21;

            xt = xq+4;
            yt = 21;

            put_char(xq, yq,queue_direction[DROITE]);
            put_char(xq+1, yq,corps_direction[DROITE]);
            put_char(xq+2, yq,corps_direction[DROITE]);
            put_char(xq+3, yq,corps_direction[DROITE]);
            put_char(xq+4, yq,tete_direction[DROITE]);

            print_at(4,1,"SCORE:");
            print_at(10,1,str(score));
            renderWave();
            nblives=3;
            renderLife();
            /*print_at(10+1,23,"WAVE:");
            print_at(15+1,23,str(current_level+1));*/


            grossit=0;
            direction=3;
            direction_demandee=3;
            dirx=1;
            diry=0;
            score=0;
            time=990;
            SCREEN_ON

            stopmusic();
			startmusic(current_music,LOOP_ON);
            break;
        case WORKFLOW_INGAME:
            /* On d�termine la direction dans laquelle veux aller le joueur */
            /* TODO : A modifier !! Le joueur veux une direction souhait�e mais pas sur */
            /* Qu'il pourra y aller ! */

            for (d=0; d<level_delay; d++)
            {
                delay(1);
                checkControl();
            }

            if (time>0) time--;

            disable_nmi();
            print_at(4,1,"SCORE:");
            print_at(10,1,str(score));

            print_at(16,1,"BONUS:");
            print_at(22,1,str(time));

            if ((get_char(xt+dirx,yt+diry)==32) || (get_char(xt+dirx,yt+diry)==101)) // Si pas de collision ou on veut aller
            {
                /* A la position courante, on �crit le corps avec la direction */
                put_char(xt,yt,corps_direction[direction]);

                xt = xt + dirx;
                yt = yt + diry;

                /* R�cup�ration du caract�re � la position x,y de la t�te */
                a = get_char(xt,yt);

                /* On bouffe une pills ?*/
                if (a==101)
                {
                    grossit=facteur_gross;
                    score+=facteur_gross;
                    print_at(4,1,"SCORE:");
                    print_at(10,1,str(score));
                    nb_pills--;
                    if (nb_pills==0) workflow = WORKFLOW_NEXTLEVEL;
                }
                /* Fin du traitement de la pills */


                /* A la nouvelle position, on �crit la tete avec la direction */
                //animate(xt,yt,direction);
                put_char(xt,yt,tete_direction[direction]);

                /* Effacement de la queue */
                nq = get_char(xq,yq);
                if (grossit==0)
                {
                    /* On efface la queue */
                    put_char(xq,yq,vide);
                    /* Ou se trouvera la prochaine queue � �teindre ? */
                    if ((nq==96) || (nq==104)) yq-=1;
                    if ((nq==97) || (nq==105)) yq+=1;
                    if ((nq==98) || (nq==106)) xq-=1;
                    if ((nq==99) || (nq==107)) xq+=1;

                    nq2 = get_char(xq,yq);  /* Quel est la direction de la prochaine queue pour la dessine ? */

                    if ((nq2==96) || (nq2==104))
                    {
                        put_char(xq,yq,queue_direction[0]);
                    }
                    if ((nq2==97) || (nq2==105))
                    {
                        put_char(xq,yq,queue_direction[1]);
                    }
                    if ((nq2==98) || (nq2==106))
                    {
                        put_char(xq,yq,queue_direction[2]);
                    }
                    if ((nq2==99) || (nq2==107))
                    {
                        put_char(xq,yq,queue_direction[3]);
                    }
                }
                else grossit--;
                /* Fin effacement de la queue */
            }
            else if (
                        (get_char(xt+dirx,yt+diry)==104) ||
                        (get_char(xt+dirx,yt+diry)==105) ||
                        (get_char(xt+dirx,yt+diry)==106) ||
                        (get_char(xt+dirx,yt+diry)==107) ||
                        (get_char(xt+dirx,yt+diry)==96) ||
                        (get_char(xt+dirx,yt+diry)==97) ||
                        (get_char(xt+dirx,yt+diry)==98) ||
                        (get_char(xt+dirx,yt+diry)==99)
                    )
            {
                        workflow = WORKFLOW_LOOSE_LIFE;
            }
            else
            {
                // Si il n'y � qu'une seule direction possible, on la choisit automatiquement !
                enable_nmi();
                delay(1);
                if (time>5) time-=5; else time=0;

                disable_nmi();
                test = get_char(xt,yt-1);
                test2 = get_char(xt,yt+1);
                test3 = get_char(xt-1,yt);
                test4 = get_char(xt+1,yt);
                nbtest=0;
                if ((test==32) || (test==101)) nbtest++;
                if ((test2==32) || (test2==101))  nbtest++;
                if ((test3==32) || (test3==101))  nbtest++;
                if ((test4==32) || (test4==101))  nbtest++;

                if (nbtest==1)
                {
                    if ((test==32) || (test==101))// on va en haut
                    {
                        direction=0;
                        dirx=0;
                        diry=-1;
                    }
                    else if ((test2==32) || (test2==101))   // on va en bas
                    {
                        direction=1;
                        dirx=0;
                        diry=1;
                    }
                    else if ((test3==32) || (test3==101))   // on va � gauche
                    {
                        direction=2;
                        dirx=-1;
                        diry=0;
                    }
                    else if ((test4==32) || (test4==101))   // on va � droite
                    {
                        direction=3;
                        dirx=1;
                        diry=0;
                    }
                }
                else if (nbtest==4) workflow = WORKFLOW_LOOSE_LIFE;
            }
            enable_nmi();
            break;
        case WORKFLOW_NEXTLEVEL:
            stopmusic();
            gestion_nextLevel();
            workflow = WORKFLOW_INGAME;
			startmusic(current_music,LOOP_ON);
            break;
        case WORKFLOW_LOOSE_LIFE:
            stopmusic();
			startmusic(music_looselife,LOOP_OFF);
            delay(1);
            efface_serpent();
            nblives--;
            pause();
			stopmusic();
            SCREEN_OFF
            xq=14;
            yq=21;

            xt = xq+4;
            yt = 21;

            put_char(xq, yq,queue_direction[DROITE]);
            put_char(xq+1, yq,corps_direction[DROITE]);
            put_char(xq+2, yq,corps_direction[DROITE]);
            put_char(xq+3, yq,corps_direction[DROITE]);
            put_char(xq+4, yq,tete_direction[DROITE]);

            grossit=0;
            direction=3;
            direction_demandee=3;
            dirx=1;
            diry=0;
            time=990;
            renderLife();
            SCREEN_ON
            workflow = WORKFLOW_INGAME;
            if (nblives==0) workflow = WORKFLOW_GAMEOVER;
   			startmusic(current_music,LOOP_ON);
            break;
        case WORKFLOW_GAMEOVER:
            stopmusic();
            startmusic(music_gameover,LOOP_OFF);
            delay(1);
            setYellowColor();
            setRedNumber();
            delay(1);
            print_at(0,0,"                                ");
            print_at(0,1,"                                ");
            center_string(0,"        GAME OVER        ");
            center_string(1,str(score));
            delay(50);
            pause();
            stopmusic();
            workflow = WORKFLOW_TITLE;
            break;
        }
    }
}

void nmi(void)
{
    ++ticks;
    G_TickCount++;
    G_count++;

    sound_nmi();
}
