cmake_minimum_required(VERSION 3.21)

# As i mentioned in the first meeting, C++ is very configurable and because of that 
# there is no easy way to have a project up and running instantly because the compiler is very
# hard to use correctly. In order to solve this, make files where created where the user can
# write steps that the compiler should do and tell it what to build and what to put in the final executable
# CMake is a step above make and it hides a whole lot of complexity under just a couple functions
# CMake requires a Language (C/CXX), a standard (17 in our case) and a minimum version of cmake
# In order to create the executable we use the add_executable(EXEC_NAME files_to_compile.cpp .....)
# Note that we only told it to compile .cpp files. This is because header files are just a way for
# developers to read the code easily. This is a 40 years old way and it will be replaced soon (C++ 20)
# already supports easier ways through modules (what Python and Js use), but for now this is our way.
# You can somehow think that at the end of the processings and before compilation, everything will be one big 
# .cpp file (not entirely true but it's enough for now)
# CMake is much much much more than this and it also handles a lot of things that we did not discuss
# but this is enough for now
project(
  cmake-basic-project
  VERSION 1.0
  LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# file(GLOB APP_SOURCES "src/*.cpp")
# add_executable(CMakeProjectTutorial main.cpp ${APP_SOURCES})

add_executable(CMakeProjectTutorial main.cpp 
    src/Accountant.cpp 
    src/Company.cpp 
    src/Developer.cpp 
    src/JsonParser.cpp 
    src/Manager.cpp)