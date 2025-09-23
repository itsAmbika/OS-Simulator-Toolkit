#include "../include/common.h"

void Display::printHeader(const string& title) {
    cout << "\n";
    printSeparator(title.length() + 10);
    cout << "     " << title << "\n";
    printSeparator(title.length() + 10);
    cout << "\n";
}

void Display::printSeparator(int length) {
    cout << string(length, '=') << "\n";
}

void Display::clearScreen() {
    // Simplified - just print newlines instead of system call
    cout << "\n\n\n";
}

void Display::pauseSystem() {
    cout << "\nPress Enter to continue...";
    InputValidator::clearInputBuffer();
    cin.get();
}

int InputValidator::getValidatedInt(const string& prompt, int min, int max) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value && value >= min && value <= max) {
            return value;
        }
        cout << "Invalid input. Please enter a number between " << min << " and " << max << ".\n";
        clearInputBuffer();
    }
}

bool InputValidator::getYesNo(const string& prompt) {
    char choice;
    while (true) {
        cout << prompt << " (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') return true;
        if (choice == 'n' || choice == 'N') return false;
        cout << "Please enter 'y' or 'n'.\n";
    }
}

void InputValidator::clearInputBuffer() {
    cin.clear();
    cin.ignore(1000, '\n');
}
