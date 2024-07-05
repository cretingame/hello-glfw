#include <stdio.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#ifdef WIN32
#include <glad/gl.h>
#endif

void error_callback(int error, const char *description) {
  fprintf(stderr, "Error: %s\n", description);
}

int main() {
  printf("Hello glfw\n");

  glfwSetErrorCallback(error_callback);

  if (!glfwInit()) {
    printf("Init failed\n");
    return -1;
  }

  printf("init ok\n");

  GLFWwindow *window =
      glfwCreateWindow(640, 480, "My Window Title", NULL, NULL);
  if (!window) {
    printf("Window creation failed\n");
    goto terminate;
  }
  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
  }

  glfwDestroyWindow(window);
terminate:
  glfwTerminate();
  printf("glfw terminated\n");
}
