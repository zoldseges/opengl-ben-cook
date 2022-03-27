#ifndef MATERIAL_H_
#define MATERIAL_H_

#include <GL/glew.h>

class Material
{
 public:
  Material();
  Material(GLfloat sIntensity, GLfloat shininess);

  void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);
  
  ~Material();

 private:
  GLfloat specularIntensity;
  GLfloat shininess;
};

#endif // MATERIAL_H_
