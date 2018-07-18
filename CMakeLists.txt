cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# the project name
project(blackjack)

# the sources shared between the main program and the tests
set(PROJECT_SOURCES hello.cpp hello.h)

# the main program
add_executable(blackjack main.cpp ${PROJECT_SOURCES})

# the tests
add_executable(tests testmain.cpp ${PROJECT_SOURCES})

