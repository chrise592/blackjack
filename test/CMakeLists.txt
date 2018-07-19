project(blackjack_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# The test program
add_executable(test_card test_card.cpp)
target_link_libraries(test_card PRIVATE blackjack_lib catch)
add_executable(test_hand test_hand.cpp)
target_link_libraries(test_hand PRIVATE blackjack_lib catch)

