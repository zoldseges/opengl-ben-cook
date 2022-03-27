#version 330

layout (location = 0) in vec3 pos;
layout (location = 1) in vec2 tex;
layout (location = 2) in vec3 norm;

out vec4 vCol;
out vec2 TexCoord;
out vec3 Normal;
out vec3 FragPos;

uniform mat4 model;
uniform mat4 projection;
uniform mat4 view;

void main()
{
  // order of multiplication is important!
  gl_Position = projection * view * model * vec4(pos, 1.0);
  vCol = vec4(clamp(pos, 0.0f, 1.0f), 1.0);

  TexCoord = tex;

  // PHONG interpolation
  // theres interpolation taking place here?
  // video 12.00
  // mat3() -> rotation takes place in the first 3x3 part of the mat4 of the model
  // transpose(inverse()) handling scaling -> inverse scaling
  Normal = mat3(transpose(inverse(model))) * norm;

  // .xyz -> convert back to vec3 (swizzling)
  FragPos = (model * vec4(pos, 1.0)).xyz;
}
