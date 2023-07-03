cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(colors)

set(src_dir "${PROJECT_SOURCE_DIR}/src")
set(include_dir "${PROJECT_SOURCE_DIR}/include")
file(GLOB_RECURSE src_files "${src_dir}/*")
add_executable(${PROJECT_NAME} ${src_files})
target_include_directories(${PROJECT_NAME} PUBLIC ${include_dir})

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)
