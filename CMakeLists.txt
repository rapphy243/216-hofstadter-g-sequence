cmake_minimum_required(VERSION 3.24)

project(the_hofstadter_g_sequence)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(sequence_test tests/sequence_test.cpp src/sequence.cpp)
add_executable(main main.cpp src/sequence.cpp)

target_link_libraries(sequence_test PRIVATE Catch2::Catch2WithMain)
