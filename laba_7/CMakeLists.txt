cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME example)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)  # Обратите внимание на правильное написание "CMAKE_CXX_STANDARD"
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Укажите все файлы, которые необходимо скомпилировать
add_executable("${PROJECT_NAME}" main.cpp utils.cpp)