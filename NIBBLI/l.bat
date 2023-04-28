@echo off
sdcc -mz80 --code-loc 0x8048 --data-loc 0x7000 --no-std-crt0 ../crtcv.rel ../cvlib.lib ../getput.lib colors.rel fonctions.rel main.rel music_data.rel musique.rel sprites_charset.rel title.rel
objcopy --input-target=ihex --output-target=binary crtcv.ihx result.rom
del *.ihx
del crtcv.lnk
pause
