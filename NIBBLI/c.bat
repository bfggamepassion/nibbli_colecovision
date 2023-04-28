@echo off
sdcc -mz80 -c --std-c99 --opt-code-speed colors.c
del colors.lst
del colors.sym
del colors.asm
sdcc -mz80 -c --std-c99 --opt-code-speed fonctions.c
del fonctions.lst
del fonctions.sym
del fonctions.asm
sdcc -mz80 -c --std-c99 --opt-code-speed main.c
del main.lst
del main.sym
del main.asm
sdcc -mz80 -c --std-c99 --opt-code-speed music_data.c
del music_data.lst
del music_data.sym
del music_data.asm
sdasz80 -o musique.rel musique.s
sdcc -mz80 -c --std-c99 --opt-code-speed sprites_charset.c
del sprites_charset.lst
del sprites_charset.sym
del sprites_charset.asm
sdcc -mz80 -c --std-c99 --opt-code-speed title.c
del title.lst
del title.sym
del title.asm
pause
