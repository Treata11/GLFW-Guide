# GLFW Guide

An accomodation of [GLFW-Guide](https://www.glfw.org/docs/latest/quick_guide.html).

The application will create a **Window** and **OpenGL Context**, render a rotating triangle and exit when the user closes the window or presses `Escape`.

The source file (`triangle-opengl.c`) could be found in [GLFW/examples](https://github.com/glfw/glfw/tree/master/examples).


## Dependencies

The project relies on a few dependencies as explained in the guide:
1. [GLFW](https://github.com/glfw/glfw) 
2. [glad](https://github.com/Dav1dde/glad) extension-loader-library
3. [linmath](https://github.com/datenwolf/linmath.h)

Which are all included in the [Dependencies directory](https://github.com/Treata11/GLFW-Guide/tree/main/Dependencies)

## Build with CMake

Clone the repository and `cd` into it.
```bash
mkdir Build && cd Build
cmake ..
cmake --build .
```
The application's executable should be found in the directory after successful build.

### If using XCode:
Run the following command in the project's directory. 
```bash
cmake -G Xcode -H. -B 'XCode Build'
```
