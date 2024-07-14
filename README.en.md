# cmake-modules
[![en](https://github.com/renatocunha216/common/blob/main/images/lang-en.svg?raw=true)](https://github.com/renatocunha216/cmake-modules/blob/master/README.en.md)
[![pt-br](https://github.com/renatocunha216/common/blob/main/images/lang-pt-br.svg?raw=true)](https://github.com/renatocunha216/cmake-modules/blob/master/README.md)

**Example** project of using cmake in a project written with C/C++ language with multiple modules (libraries and executables).

| Module     | Description                           | Dependencies          |
|------------|---------------------------------------|-----------------------|
| crypto-lib | Library with cryptographic functions. |                       |
| math-lib   | Library with mathematical functions.  |                       |
| demo1      | Demo application 1.                   | math-lib              |
| demo2      | Demo application 2.                   | crypto-lib / math-lib |


### Tools used

- cmake-3.23.1
- Mingw64 distribution x86_64-8.1.0-release-win32-seh-rt_v6-rev0

### How to use

Windows:

1. Set the MINGW_HOME environment variable to the mingw installation path.

2. Run the **cmake-config.bat** batch script to configure the applications build profiles.<br>
In the example we have the *Debug* and *Release* profiles that create build system generator *MinGW Makefiles*.<br>
If necessary, change the **cmake-config.bat** file according to the **make** application path.

Example:

```batch
REM Generate make configuration files for MinGW in RELEASE mode (cmake default)
call cmake ^
-D CMAKE_BUILD_TYPE=Release ^
-D "CMAKE_MAKE_PROGRAM:PATH=%MINGW_HOME%/bin/mingw32-make.exe" ^
-G "MinGW Makefiles" ..
```

The following directories configured for use by MinGW as make will be created.<br>
`
./_debug
`
<br>
`
./_release
`

3. Enter the generated directory and run the **make** command or the **cmake --build .** command.
```
>make
[ 10%] Building C object math-lib/CMakeFiles/math-lib.dir/src/_math.c.obj
[ 20%] Building C object math-lib/CMakeFiles/math-lib.dir/src/math-dll.c.obj
[ 30%] Linking C shared library libmath-lib.dll
[ 30%] Built target math-lib
[ 40%] Building C object crypto-lib/CMakeFiles/crypto-lib.dir/src/crypto.c.obj
[ 50%] Building C object crypto-lib/CMakeFiles/crypto-lib.dir/src/crypto-dll.c.obj
[ 60%] Linking C shared library libcrypto-lib.dll
[ 60%] Built target crypto-lib
[ 70%] Building C object demo1/CMakeFiles/demo1.dir/src/demo1.c.obj
[ 80%] Linking C executable demo1.exe
[ 80%] Built target demo1
[ 90%] Building C object demo2/CMakeFiles/demo2.dir/src/demo2.c.obj
[100%] Linking C executable demo2.exe
[100%] Built target demo2
```
