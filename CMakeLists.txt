cmake_minimum_required(VERSION 3.12)

project(glfw_glad_all)

add_subdirectory(lib/glfw)

add_library(glfw_glad_all SHARED)

find_package(OpenGL REQUIRED)



target_sources(glfw_glad_all PRIVATE src/glfw_glad_all.c)
target_include_directories(glfw_glad_all PUBLIC include)
target_link_libraries(glfw_glad_all PRIVATE glfw)
target_link_libraries(glfw_glad_all PRIVATE OpenGL::GL)