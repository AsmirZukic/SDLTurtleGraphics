#include "../include/engine.h"
#include "../include/turtle.hpp"

int main( int argc, char* argv[] )
{
  Engine engine;
  Turtle turtle;

  double lineLenght = 20;

  turtle.penDown();
  turtle.moveTo( 320 , 240 );


  for( auto i = 0;  i < 100; i++ )
  {
    turtle.setLenght( lineLenght );
    turtle.step();
    turtle.render();

    turtle.turnRight( 65 );
    lineLenght += 5;
  }

  while( engine.isRunning() )
  {
    engine.handleInput();

    engine.draw();
  }
}
