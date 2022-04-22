# Instructions

## Vcpkg with CLion

Open the Toolchains settings
(File > Settings on Windows and Linux, CLion > Preferences on macOS),
and go to the CMake settings (Build, Execution, Deployment > CMake).
Finally, in `CMake options`, add the following line:

```
-DCMAKE_TOOLCHAIN_FILE=[vcpkg root]/scripts/buildsystems/vcpkg.cmake
```

(I put ``` -DCMAKE_TOOLCHAIN_FILE=C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake ```)

Unfortunately, you'll have to add this to each profile. You can't set this globally in CLion when I tried, it has to be per project.

This is just one example as per CMakeLists.txt to find the library for Boost but the same logic / concept should work on other libraries e.g. SFML,Raylib and such.