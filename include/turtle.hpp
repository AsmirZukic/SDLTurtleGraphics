#pragma once

#include "renderer.hpp"

class Turtle
{
public:
  Turtle();

  void penDown();
  void penUp();

  void setLenght( double lenght );
  void setAngle( double angle );

  void turnRight( double angle );
  void turnLeft( double angle );

  void moveTo( double xPos, double yPos );

  void step();

  void render();

private:
  Renderer* pRenderer = Renderer::getInstance();

  double m_xPos1, m_yPos1, temp1, temp2;
  double m_Angle, m_Lenght;

  bool isDown;
};
