#ifndef MENU_SYSTEM_H
#define MENU_SYSTEM_H

#include "common.h"

class MenuSystem {
private:
    struct MenuItem {
        string name;
        string description;
        void (*function)();
    };
    
    vector<MenuItem> mainMenuItems;
    
public:
    MenuSystem();
    void run();
    void displayMainMenu();
    int getChoice();
};

// Forward declarations for module functions
void cpuSchedulingMenu();
void diskSchedulingMenu();
void pageReplacementMenu();
void memoryManagementMenu();
void deadlockDetectionMenu();
void synchronizationMenu();

#endif
