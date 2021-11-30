# SDLTurtleGraphics
Turtle graphics done in C++ and SDL2

## Usage
Define the starting positon of the turtle with moveTo method. Define the lenght of the step you want to take with setLenght method. The step Method make the turtle move.
There are methods defined for turning left and right as well as pen down and pen up. The turtle starts in the pen up positon.

## Compilation 
Under linux everying should complie by running ```make all```. Make sure you have SDL2 installed on your machine

Has not been tested for windows. You have to change ```#include<SDL2/SDL.h> ``` to ```#include<SDL.h>``` and make sure you have the libraries installed.
