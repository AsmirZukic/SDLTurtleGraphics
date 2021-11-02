#include "../include/turtle.hpp"
#include <math.h>

Turtle::Turtle()
{
  m_xPos1 = 0;
  m_yPos1 = 0;
  temp1 = 0;
  temp2 = 0;
  m_Angle = 0;
  m_Lenght = 0;

  isDown = false;
}

void Turtle::penDown()
{
  isDown = true;
}

void Turtle::penUp()
{
  isDown = false;
}

void Turtle::setLenght( double lenght )
{
  m_Lenght = lenght;
}

void Turtle::setAngle( double angle )
{
  m_Angle = angle;
}

void Turtle::turnLeft( double angle )
{
  m_Angle -= angle * ( M_PI / 180 );
}

void Turtle::turnRight( double angle )
{
  m_Angle += angle * ( M_PI / 180 );
}

void Turtle::moveTo( double xPos, double yPos )
{
  m_xPos1 = xPos;
  m_yPos1 = yPos;
}

void Turtle::step()
{
  temp1 = m_xPos1;
  temp2 =  m_yPos1;

  m_xPos1 = temp1 + ( cos( m_Angle ) * m_Lenght );
  m_yPos1 = temp2 + ( sin( m_Angle ) * m_Lenght );
}

void Turtle::render()
{
  SDL_SetRenderDrawColor( pRenderer->getRenderer(), 0xFF, 0xFF, 0xFF, 0xFF );
  SDL_RenderDrawLine( pRenderer->getRenderer(),
  static_cast<int>( round( temp1 ) ), static_cast<int>( round( temp2 ) ),
  static_cast<int>( round( m_xPos1 ) ), static_cast<int>( round( m_yPos1 ) ) );
}
