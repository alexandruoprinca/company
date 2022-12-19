# Company interpretation written in C++
## Prerequisites:
1. Install cmake: https://cmake.org/download/ scroll to "Latest Release" and choose from "Binary Distributions" the Windows x64 Installer
1.1 Note: If asked, check yes if the installer wants to add cmake to your path
2. From VSCode extensions install the C/C++ extension from Microsoft, the C/C++ Extension Pack from Microsoft, the CMake extension from twxs and CMake Tools from Microsoft

## How to build the app:
1. Open a terminal in the project location
2. Create a new folder inside the project location (usually called build): `mkdir build`
2.1 Enter the build directory: `cd build`
3. Run cmake on the project's CMakeLists.txt location: `cmake ..` //Note that the .. from `cmake ..` is the location of the CMakeLists.txt file and the location from where you call cmake (in this case the build folder) is where the cmake will create the build files
If you look into the build folder now (`ls` or `dir` or file explorer) you will see a lot of files. These files basically store instructions for another application called `make` that knows how to directly call the compiler
4. From the build folder run `make`
5. Call the newly created executable (currently called CMakeProjectTutorial) by invoking it using `./CMakeProjectTutorial` for bash and `CMakeProjectTutorial` for cmd


## Project notes:

1. For the cmake part, read the indications from CMakeLists.txt
2. For the code part, read the comments in the project