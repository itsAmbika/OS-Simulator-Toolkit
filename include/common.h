#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

// Common display utilities
class Display {
public:
    static void printHeader(const string& title);
    static void printSeparator(int length = 60);
    static void clearScreen();
    static void pauseSystem();
};

// Input validation utilities
class InputValidator {
public:
    static int getValidatedInt(const string& prompt, int min = 0, int max = 1000);
    static bool getYesNo(const string& prompt);
    static void clearInputBuffer();
};

#endif
