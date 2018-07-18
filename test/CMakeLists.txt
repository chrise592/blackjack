project(blackjack_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# The test program
add_executable(tests test_card.cpp)
target_link_libraries(tests PRIVATE blackjack_lib catch)

