@echo off
echo Building OS Simulator Toolkit...
g++ -std=c++17 -Iinclude simple_main.cpp src\cpu_scheduling\CPU_TEST.cpp src\disk_scheduling\disk_scheduling.cpp src\page_replacement\page_replacement.cpp src\memory_management\memory_management.cpp src\deadlock_detection\deadlock_detection.cpp -o os_simulator.exe

if %errorlevel% == 0 (
    echo.
    echo ✅ Build successful!
    echo Run with: .\os_simulator.exe
) else (
    echo.
    echo ❌ Build failed!
)
pause
