#ifndef MESH_H_
#define MESH_H_

#include <GL/glew.h>

class Mesh
{
 public:
  Mesh();

  void CreateMesh(GLfloat *vertices,
		  unsigned int *indices,
		  unsigned int numOfVertices,
		  unsigned int numOfIndices);
  void RenderMesh();
  void ClearMesh();

  ~Mesh();

 private:
  GLuint VAO, VBO, IBO;
  GLsizei indexCount;
};

#endif // MESH_H_
