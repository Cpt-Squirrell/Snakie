#include <iostream>
#include "GLFW/glfw3.h"
using namespace std;

int main (int argc, char *argv[]) {

    GLFWwindow *window;

    //Init glfw
    if (!glfwInit()) { return 1; }
    
    //Create a window
    window = glfwCreateWindow (640, 460, "Hello.", NULL, NULL);
    if (!window) { return 1; }
    
    //Make window current
    glfwMakeContextCurrent (window);

    //Enter main game loop
    while (!glfwWindowShouldClose (window)) {
        glClear (GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers (window);
        glfwPollEvents();    
    }

    glfwTerminate();
    return 0;
}