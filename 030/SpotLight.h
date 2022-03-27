#ifndef SPOTLIGHT_H_
#define SPOTLIGHT_H_

#include "PointLight.h"

class SpotLight : public PointLight
{
public:  
  SpotLight();
  SpotLight(GLfloat red, GLfloat green, GLfloat blue,
	    GLfloat aIntensity, GLfloat dIntensity,
	    GLfloat xDir, GLfloat yDir, GLfloat zDir,
	    GLfloat xPos, GLfloat yPos, GLfloat zPos,
	    GLfloat con, GLfloat lin, GLfloat exp,
	    GLfloat edg);

  void UseLight(GLuint ambientIntensityLocation,
		GLuint ambientColourLocation,
		GLuint diffuseIntensityLocation,
		GLuint positionLocation,
		GLuint directionLocation,
		GLuint constantLocation,
		GLuint linearLocation,
		GLuint exponentLocation,
		GLuint edgeLocation);

  ~SpotLight();

private:
  glm::vec3 direction;

  GLfloat edge, procEdge;
};
  
#endif // SPOTLIGHT_H_
