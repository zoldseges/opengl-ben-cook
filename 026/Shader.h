#ifndef SHADER_H_
#define SHADER_H_

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

#include <GL/glew.h>

class Shader
{
public:
  Shader();

  void CreateFromString(const char* vertexCode,
			const char* fragmentCode);
  void CreateFromFiles(const char* vertexLocation,
		      const char* fragmentLocation);

  std::string ReadFile(const char* fileLocation);

  GLuint GetProjectionLocation();
  GLuint GetModelLocation();
  GLuint GetViewLocation();
  GLuint GetAmbientIntensityLocation();
  GLuint GetAmbientColourLocation();
  GLuint GetDiffuseIntensityLocation();
  GLuint GetDirectionLocation();

  void UseShader();
  void ClearShader();

  ~Shader();

private:
  GLuint shaderID, uniformProjection, uniformModel, uniformView,
    uniformAmbientIntensity, uniformAmbientColour,
    uniformDiffuseIntensity, uniformDirection;

  void CompileShader(const char* vertexCode, const char* fragmentCode);
  void AddShader(GLuint theProgram,
		 const char* shaderCode,
		 GLenum shaderType);
};

#endif // SHADER_H_
