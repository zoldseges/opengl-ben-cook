#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

const GLint WIDTH = 800;
const GLint HEIGHT = 600;


int main(void)
{
  // initialize glfw
  if(!glfwInit()) {
    printf("GLFW pooed itself\n");
    glfwTerminate();
    return 1;
  }

  // setup glfw window properties
  // opengl version
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  // Core profile == no backwards compatibility
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  // setup forward compatibility
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  GLFWwindow *mainWindow = glfwCreateWindow(WIDTH,
					    HEIGHT,
					    "Test Window",
					    NULL,
					    NULL);
  
  if(!mainWindow) {
    printf("GLFW window creation was a problem for this piece of crap\n");
    glfwTerminate();
    return 1;
  }

  // Get Buffer size information
  int bufferWidth;
  int bufferHeight;
  glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);
  
  // set context for GLEW to use
  glfwMakeContextCurrent(mainWindow);

  // allow modern extension features
  glewExperimental = GL_TRUE;

  if(glewInit() != GLEW_OK) {
    printf("Glew init was too much to ask for\n");
    glfwDestroyWindow(mainWindow);
    glfwTerminate();
    }

  // Setup Viewport size
  glViewport(0, 0, bufferWidth, bufferHeight);
  
  // Loop until window closed
  while(!glfwWindowShouldClose(mainWindow)){
    // Get and handle user input events
    glfwPollEvents();
    
    // clear window
    glClearColor(1.0, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(mainWindow);
  }

  return 0;
}
