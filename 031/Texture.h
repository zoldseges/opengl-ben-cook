#ifndef TEXTURE_H_
#define TEXTURE_H_

#include <GL/glew.h>
#include "stb_image.h"

class Texture
{
 public:
  Texture();
  Texture(const char *fileLoc);

  bool LoadTexture();
  // texture with alpha
  bool LoadTextureA();
  
  void UseTexture();
  void ClearTexture();
    
  ~Texture();
  
 private:
  GLuint textureID;
  int width, height, bitDepth;

  const char *fileLocation;
};

#endif // TEXTURE_H_
