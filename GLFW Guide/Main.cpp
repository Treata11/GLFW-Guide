/*
 Main.cpp
 GLFW Guide

 Created by Treata Norouzi on 8/24/24.
 
 Based on: https://www.glfw.org/docs/latest/quick_guide.html
*/

#include <stdio.h>

#define GL_SILENCE_DEPRECATION


// explicitly disable inclusion of the development environment header.
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <OpenGL/gl3.h>


//void error_callback(int error, const char* description) {
//    fprintf(stderr, "Error: %s\n", description);
//    fputs(description, stderr);
//}
//
//void minimumRequirements() {
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//}
//
//// Receiving input events
//static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
//    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, GLFW_TRUE);
//}
//
//// MARK: - Main
//
//int main(void) {
//    glfwSetErrorCallback(error_callback);
//    
//    if (!glfwInit()) {
//        fprintf(stderr, "%s", "`glfw3` Initialization failed");
//    }
//    
//    minimumRequirements();
//    // - Window & Context Creation
//    GLFWwindow* window = glfwCreateWindow(640, 480, "GLFW Guide", NULL, NULL);
//    if (!window) {
//        fprintf(stderr, "%s", "Window or OpenGL context creation failed");
//    }
//    
//    // - Making the OpenGL context current
//    glfwMakeContextCurrent(window);
//    
//    // - Checking the window close flag
//    while (!glfwWindowShouldClose(window)) { /* Keep running */ }
//    // be notified about closing the window
//    // glfwSetWindowCloseCallback(window, <#GLFWwindowclosefun callback#>)
//    
//    // - Receiving input events; set per-window
//    glfwSetKeyCallback(window, key_callback);
//    
//    // MARK: Rendering
//    int width, height;
//    // The framebuffer size needs to be retrieved for glViewport
//    glfwGetFramebufferSize(window, &width, &height);
//    glViewport(0, 0, width, height);
//    
//    // - Reading the timer; for animation
//    double time = glfwGetTime();
//    
//    /*
//     - Swapping buffers
//     When the entire frame has been rendered, the buffers need to be swapped
//     with one another, so the back buffer becomes the front buffer and vice versa.
//     */
//    glfwSwapBuffers(window);
//    
//    // setting the `vsync` latency
//    glfwSwapInterval(10);
//    
//    // - Processing events
//    // here are two methods for processing pending events; polling and waiting.
//    glfwPollEvents();
//    
//    glfwDestroyWindow(window);
//    glfwTerminate();
//    return 0;
//}
