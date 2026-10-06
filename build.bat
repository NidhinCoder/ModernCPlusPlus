@echo off
REM Simple build helper for the C++ learning repo.
REM Usage:  from any topic folder, run:   ..\build main.cpp
REM         or from this root:            build 02-const-correctness\main.cpp
REM It loads the MSVC environment (so cl.exe is found), compiles with C++20,
REM high warnings, then runs the resulting .exe.

setlocal

REM --- Load the Visual Studio x64 developer environment (only if cl isn't already available) ---
where cl >nul 2>nul
if errorlevel 1 (
    call "C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat" >nul
)

if "%~1"=="" (
    echo Usage: build ^<source.cpp^>
    exit /b 1
)

echo Compiling %~1 ...
cl /std:c++20 /EHsc /W4 /nologo "%~1"
if errorlevel 1 (
    echo.
    echo Build FAILED.
    exit /b 1
)

REM Run the produced exe (same base name as the source).
echo.
echo --- Running ---
"%~n1.exe"

endlocal
