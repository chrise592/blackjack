cmake_minimum_required(VERSION 3.5)

# The project name
project(blackjack)

add_subdirectory(thirdparty/catch)
add_subdirectory(thirdparty/gsl)
add_subdirectory(src)
add_subdirectory(test)

