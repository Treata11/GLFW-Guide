cmake_minimum_required(VERSION 3.10)

# Enable group projects in folders
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")

project(GLFW-Guide)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 11)

# Set search paths
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/CMake/")


# ---------- OpenGL ----------
find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} )

# Specify the directories for dependencies
set(GLFW_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/GLFW")
set(GLAD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/glad")
set(LINMATH_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/linmath.h")

# ---------- glad ----------
# Add glad source files and include directories
add_library(glad STATIC
    ${GLAD_DIR}/src/glad.c  # Add the glad source file
)

# Specify include directories for glad
target_include_directories(glad PUBLIC
    ${GLAD_DIR}/include    # The include folder for glad
)

# ---------- GLFW ----------
if (WIN32)

    ## TODO: Add Windows package

elseif (APPLE)
    set(GLFW_INCLUDE_DIR "${GLFW_DIR}/APPL/include")
    set(GLFW_LIB_DIR "${GLFW_DIR}/APPL/lib")

    # Add GLFW library manually if find_package fails (or use if required)
    # You may need to adjust the library file name depending on your environment
    # For example, libglfw.a for static or libglfw.dylib for dynamic linking
    set(GLFW_LIB "${GLFW_LIB_DIR}/libglfw.dylib") # Update to .a or .dylib based on your choice

    # Include the directories for GLFW
    include_directories(${GLFW_INCLUDE_DIR})

elseif (UNIX)

    ## TODO: Add Linux package

endif()

# ----------------------------

# Create the executable
add_executable(triangle-opengl
    ${CMAKE_CURRENT_SOURCE_DIR}/GLFW\ Guide/triangle-opengl.c
)

# Link the executable to GLFW, OpenGL, and glad
target_link_libraries(triangle-opengl
    ${GLFW_LIB}
    glad
    ${OPENGL_LIBRARIES}
)

# Include linmath.h directly since it's just a single header
include_directories(${LINMATH_DIR})
