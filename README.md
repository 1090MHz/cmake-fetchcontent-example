
# CMake FetchContent Example  

Cross-platform CMake project demonstrating the use of FetchContent for dependency management.  

This repository demonstrates a simple CMake project that uses the FetchContent module to manage dependencies. In this example, the fmt library is fetched from its Git repository and is used in this project.  

## Prerequisites  

CMake 3.14 or later  
A C++ compiler that supports C++11  
Git

## Building the Project  

Clone this repository:  
```sh  
git clone https://github.com/1090MHz/cmake-fetchcontent-example
cd cmake-fetchcontent-example  
```  

Create a build directory and navigate into it:  
```sh  
mkdir build  
cd build  
```  

Run CMake to generate the build files:  
```sh  
cmake ..  
```  

Build the project:  
```sh  
cmake --build .  
``` 
This will download the fmt library, build it, and then build the cmake-fetchcontent-example project. The resulting executable will be named cmake-fetchcontent-example (or cmake-fetchcontent-example.exe on Windows).

## Generated Build Files

Running CMake generates build files for your specific build system:

On Windows, CMake generates a Visual Studio solution (*.sln and *.vcxproj files) by default. You can open this solution in Visual Studio and build the project from there. Note that any changes made directly to the solution file might be overwritten the next time you run CMake. To make persistent changes to the build configuration, modify the CMakeLists.txt files and re-run CMake.
On Linux, CMake generates Makefiles by default. You can build the project using the make command.
On macOS, CMake generates Makefiles by default, but it can also generate Xcode project files if you pass -G Xcode to the CMake command.
Remember, the CMakeLists.txt files are the main source of truth in a CMake project. The generated build files are specific to each development environment and can be easily recreated by running CMake.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.