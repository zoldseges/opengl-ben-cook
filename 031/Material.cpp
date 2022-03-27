#include "Material.h"

Material::Material()
{
  specularIntensity = 0.0f;
  shininess = 0.0f;
}

void Material::UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation)
{
  glUniform1f(specularIntensityLocation, specularIntensity);
  glUniform1f(shininessLocation, shininess);
  
}


Material::Material(GLfloat sIntensity, GLfloat shine)
{
  specularIntensity = sIntensity;
  shininess = shine;
}

Material::~Material()
{
}
