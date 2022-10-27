This repo describes a bug about candidate of Visual Studio 2022 17.3.6:

try catch statement of C++ doesn't work on ARM64 windows device

Build
```shell
mkdir build_win_arm
cd build_win_arm
cmake -A ARM64 ..
cmake --build .
```

Copy the executable file to a ARM64 windows device such as surface pro X.
The exception is not catch and the program crashed.