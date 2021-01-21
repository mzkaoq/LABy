cmake_minimum_required( VERSION 3.0 )

project( laby4 )
include_directories(include src test)

add_executable(${PROJECT_NAME} src/main.cpp src/Matrix.cpp )