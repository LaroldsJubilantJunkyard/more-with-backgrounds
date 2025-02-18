:: delete previous files
DEL *.gb

:: compile .c files into .o files
C:\gbdk\bin\lcc -c -o main.o main.c
C:\gbdk\bin\lcc -c -o gbdk-rocks-colored.o gbdk-rocks-colored.c

:: Compile a .gb file from the compiled .o files
C:\GBDK\bin\lcc -Wm-yC  -o MoreWithBackgrounds.gb main.o gbdk-rocks-colored.o

:: delete intermediate files created for the conmpilation process
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o