CC=g++
CFLAGS= -c -Wall
SDL2= -w -lSDL2

all: TurtleGraphics

TurtleGraphics: main.o engine.o renderer.o window.o turtle.o
	$(CC) main.o engine.o renderer.o window.o turtle.o $(SDL2) -o TurtleGraphics

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp

engine.o: src/engine.cpp
	$(CC) $(CFLAGS) src/engine.cpp

renderer.o: src/renderer.cpp
	$(CC) $(CFLAGS) src/renderer.cpp

window.o: src/window.cpp
	$(CC) $(CFLAGS) src/window.cpp

turtle.o: src/turtle.cpp
	$(CC) $(CFLAGS) src/turtle.cpp

clean:
	rm *.o TurtleGraphics
