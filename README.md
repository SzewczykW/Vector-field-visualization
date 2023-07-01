# Vector-field-visualization
Authors: Aleksandra Michalska, Wiktor Szewczyk, Patryk Madej
## Description
Basic vector field visualization.
Visualization is done with our own implementation of the matrix operations and with
the help of wxWidgets library for C++.

## Usage
Precompiled executable is available in the Vector-field-visualization.7z file.
To run the program, you don't need to install anything, just extract the archive and run the executable.
The program is tested on Windows 10 and 11 and also on Ubuntu 22.04 LTS.

## Compilation
To compile the program, you need to have wxWidgets library installed.
Then you can use CMake to generate the build files and compile the program or
you can use Visual Studio 2022 to do it for you. Simply you have to create a new project,
copy the source files and add the wxWidgets library to the project by adding the include
and libraries paths to the project properties. You should also enable Unicode support and
C++20 standard.

wxWidgets download: https://www.wxwidgets.org/downloads/
