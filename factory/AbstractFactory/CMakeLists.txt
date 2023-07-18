cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_GENERATOR "Ninja")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(AbstractFactory)
aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)

add_executable(app ${SRC_LIST})