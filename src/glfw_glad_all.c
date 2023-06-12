#include "../include/glfw_glad_all.h"

void initGlad(){
    gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
    gladLoadGL();
}