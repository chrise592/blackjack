project (Catch)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Header only library, therefor INTERFACE
add_library(catch INTERFACE)

# INTERFACE targets only have INTERFACE properties
target_include_directories(catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

