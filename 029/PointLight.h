#ifndef POINTLIGHT_H_
#define POINTLIGHT_H_

#include "Light.h"

class PointLight : public Light
{
 public:
  PointLight();
  PointLight(GLfloat red, GLfloat green, GLfloat blue,
	     GLfloat aIntensity,
	     GLfloat dIntensity,
	     GLfloat xPos, GLfloat yPos, GLfloat zPos,
	     GLfloat con, GLfloat lin, GLfloat exp);
	     
  
  void UseLight(GLfloat ambientIntensityLocation,
		GLfloat ambientColourLocation,
		GLfloat diffuseIntensityLocation,
		GLfloat positionLocation,
		GLfloat constantLocation,
		GLfloat linearLocation,
		GLfloat exponentLocation);

  ~PointLight();

 private:
  glm::vec3 position;

  // c + bx + ax^2 - attenuation
  GLfloat constant, linear, exponent;
};

#endif // POINTLIGHT_H_
