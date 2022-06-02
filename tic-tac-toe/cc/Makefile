OBJS = src/main.cc
CC = g++
CFLAGS = -w \
	`sdl2-config --cflags` \
	`pkg-config sdl2_ttf --cflags` \
	`pkg-config sdl2_image --cflags`
LFLAGS = \
	`sdl2-config --libs` \
	`pkg-config sdl2_ttf --libs` \
	`pkg-config sdl2_image --libs`
EXECUTABLE = ttt

linux: $(OBJS)
	mkdir -p bin/linux
	$(CC) $(OBJS) $(CFLAGS) $(LFLAGS) -o bin/linux/$(EXECUTABLE)
msys2_64:
	mkdir -p bin/win64
	$(CC) $(OBJS) $(CFLAGS) $(LFLAGS) -o bin/win64/$(EXECUTABLE)
	wget "https://www.libsdl.org/release/SDL2-2.0.22-win32-x64.zip"
	wget "https://www.libsdl.org/projects/SDL_image/release/SDL2_image-2.0.5-win32-x64.zip"
	wget "https://www.libsdl.org/projects/SDL_ttf/release/SDL2_ttf-2.0.18-win32-x64.zip"
	unzip SDL2-2.0.22-win32-x64.zip SDL2.dll
	unzip SDL2_image-2.0.5-win32-x64.zip SDL2_image.dll
	unzip SDL2_ttf-2.0.18-win32-x64.zip SDL2_ttf.dll
	mv {SDL2,SDL2_image,SDL2_ttf}.dll ./bin/win64/
	rm *.zip
	cp -r resources ./bin/win64/
