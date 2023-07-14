@echo off
rem del _test /Q /S
del _release /Q /S
del _debug /Q /S
rem rmdir _test /Q /S
rmdir _release /Q /S
rmdir _debug /Q /S
rem mkdir _test
mkdir _debug
mkdir _release
cd _debug

rem Generate make configuration files for MinGW in DEBUG mode (cmake default)
call cmake ^
-D CMAKE_BUILD_TYPE=Debug ^
-D "CMAKE_MAKE_PROGRAM:PATH=%MINGW_HOME%/bin/make.exe" ^
-G "MinGW Makefiles" ..
cd ..
cd _release

rem Generate make configuration files for MinGW in RELEASE mode (cmake default)
call cmake ^
-D CMAKE_BUILD_TYPE=Release ^
-D "CMAKE_MAKE_PROGRAM:PATH=%MINGW_HOME%/bin/make.exe" ^
-G "MinGW Makefiles" ..
rem cd ..
rem cd _test

rem Generate make configuration files for MinGW in TEST mode (custom)
rem call cmake ^
rem -D CMAKE_BUILD_TYPE=Test ^
rem -D "CMAKE_MAKE_PROGRAM:PATH=%MINGW_HOME%/bin/make.exe" ^
rem -G "MinGW Makefiles" ..
rem cd ..
@echo End of creation of build files configuration using CMAKE.
rem pause