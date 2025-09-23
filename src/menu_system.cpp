#include "../include/menu_system.h"

MenuSystem::MenuSystem() {
    // Initialize menu items
    mainMenuItems = {
        {"CPU Scheduling", "FCFS, SJF, Round Robin, Priority", cpuSchedulingMenu},
        {"Disk Scheduling", "FCFS, SSTF, SCAN, LOOK", diskSchedulingMenu},
        {"Page Replacement", "FIFO, LRU, Optimal, Clock", pageReplacementMenu},
        {"Memory Management", "First Fit, Best Fit, Worst Fit", memoryManagementMenu},
        {"Deadlock Detection", "Banker's Algorithm", deadlockDetectionMenu},
        {"Synchronization", "Producer-Consumer, Dining Philosophers", synchronizationMenu}
    };
}

void MenuSystem::run() {
    while (true) {
        Display::clearScreen();
        displayMainMenu();
        int choice = getChoice();
        
        if (choice == 0) {
            cout << "\nThank you for using OS Simulator Toolkit!\n";
            break;
        }
        
        if (choice > 0 && choice <= mainMenuItems.size()) {
            Display::clearScreen();
            mainMenuItems[choice - 1].function();
            Display::pauseSystem();
        }
    }
}

void MenuSystem::displayMainMenu() {
    Display::printHeader("OS SIMULATOR TOOLKIT");
    
    for (size_t i = 0; i < mainMenuItems.size(); ++i) {
        cout << setw(2) << (i + 1) << ". " << mainMenuItems[i].name 
             << " - " << mainMenuItems[i].description << "\n";
    }
    
    cout << setw(2) << 0 << ". Exit\n";
    Display::printSeparator();
}

int MenuSystem::getChoice() {
    return InputValidator::getValidatedInt("Enter your choice: ", 0, mainMenuItems.size());
}
