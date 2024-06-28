#include <stdio.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main() {
  printf("Hello glfw\n");

  if (!glfwInit()) {
    printf("Init failed\n");
    return -1;
  }

  printf("init ok\n");
}
