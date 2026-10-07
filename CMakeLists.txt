cmake_minimum_required(VERSION 3.10.0)
project(Automatic-LAB-planner VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20) 

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(Library/glfw-3.5.1)

include_directories(Include/
        Include/imgui/headers/
        Include/imgui/
        Include/imgui/backends/
        Include/GLFW/
        )

add_executable(Automatic-LAB-planner 
    Include/imgui/imgui.cpp
    Include/imgui/imgui_demo.cpp
    Include/imgui/imgui_draw.cpp
    Include/imgui/imgui_tables.cpp
    Include/imgui/imgui_widgets.cpp

    Include/imgui/backends/imgui_impl_glfw.cpp

    main.cpp)

target_link_libraries(Automatic-LAB-planner glfw)
