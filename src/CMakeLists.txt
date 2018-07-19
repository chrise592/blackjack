project(blackjack_prog)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# All sources that also need to be tested in unit tests go into a static library
add_library(blackjack_lib STATIC
    card.cpp card.h
    hand.cpp hand.h
)
target_include_directories(blackjack_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(blackjack_lib PUBLIC)

# The main program
add_executable(blackjack main.cpp)
target_link_libraries(blackjack PRIVATE blackjack_lib)

