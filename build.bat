@echo off

echo Compiling Movie Ticket Booking System...

g++ *.cpp -o MovieBooking.exe

if %errorlevel% neq 0 (
    echo.
    echo Compilation failed!
    pause
    exit /b
)

echo.
echo Compilation successful!
echo Starting program...
echo.

MovieBooking.exe

pause