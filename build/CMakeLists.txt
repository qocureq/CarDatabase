cmake_minimum_required(VERSION 3.21)
project(Car_Database)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        ${PROJECT_NAME}
        ../src/main.cpp
        ../src/car.cpp
        ../src/database.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        ${PROJECT_NAME}-unittest
        ../src/tests.cpp
)
target_link_libraries(
        ${PROJECT_NAME}-unittest
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-unittest)