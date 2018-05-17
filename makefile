obj_ext = .o
src_c = $(wildcard *.c)
obj = $(src_c:.c=$(obj_ext))

CC = gcc
CXX = g++

CFLAGS = -Wall -g -I$(IDIR)
LDFLAGS = -L$(AL_LDIR)
EXEC = $(proj)$(exe_ext)

AL_IDIR = E:\Documents\coisas_uteis\mingw64\allegro\include
CFLAGS = -I$(AL_IDIR)

AL_LDIR = E:\Documents\coisas_uteis\mingw64\allegro\lib
AL_LIBS = -lallegro_monolith-debug-static -ljpeg -ldumb -lFLAC -lfreetype -lvorbisfile -lvorbis -logg -lphysfs -lpng16 -lzlib -ldsound -lgdiplus -luuid -lkernel32 -lwinmm -lpsapi -lopengl32 -lglu32 -luser32 -lcomdlg32 -lgdi32 -lshell32 -lole32 -ladvapi32 -lws2_32 -lshlwapi -static-libstdc++ -static-libgcc

made: $(obj)
	$(CC) $(CFLAGS) -c $(src_c) -o $(obj)
	$(CXX) $(LDFLAGS) -o $@ $(obj) $(AL_LIBS)

# .PHONY: clean

# clean:
# rm 