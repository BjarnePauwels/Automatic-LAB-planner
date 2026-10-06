#include <iostream>
#include <glfw3.h>
#include <glad/glad.h>

int main(int, char**){
    if(!glfwInit()){
        error_callback(1, "initialization failed");
    }
    glfwSetErrorCallback(error_callback);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(640, 480, "My title", NULL, NULL); 
    if(!window){
        error_callback(2, "window creation failed");
    }
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        
        std::cout << "window" << std::endl;


    }

    glfwDestroyWindow(window);
    glfwTerminate();
}


void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}
