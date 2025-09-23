#include <iostream>
#include <iomanip>
using namespace std;

// Include original module headers
#include "CPU_TEST.h"
#include "disk_scheduling.h"
#include "page_replacement.h"
#include "memory_management.h"
#include "deadlock_detection.h"

void showMenu() {
    cout << "\n" << string(50, '=') << "\n";
    cout << "        OS SIMULATOR TOOLKIT\n";
    cout << string(50, '=') << "\n";
    cout << "1. CPU Scheduling Algorithms\n";
    cout << "2. Disk Scheduling Algorithms\n";
    cout << "3. Page Replacement Algorithms\n";
    cout << "4. Memory Management\n";
    cout << "5. Deadlock Detection\n";
    cout << "0. Exit\n";
    cout << string(50, '=') << "\n";
    cout << "Enter choice: ";
}

int main() {
    int choice;
    
    while (true) {
        showMenu();
        cin >> choice;
        
        if (choice == 0) {
            cout << "\nThank you for using OS Simulator!\n";
            break;
        }
        
        cout << "\n";
        switch (choice) {
            case 1:
                cout << "=== CPU SCHEDULING ===\n";
                runCPUScheduling();
                break;
            case 2:
                cout << "=== DISK SCHEDULING ===\n";
                disk_scheduling();
                break;
            case 3:
                cout << "=== PAGE REPLACEMENT ===\n";
                runPageReplacement();
                break;
            case 4:
                cout << "=== MEMORY MANAGEMENT ===\n";
                simulateMemoryManagement();
                break;
            case 5:
                cout << "=== DEADLOCK DETECTION ===\n";
                runBankersAlgorithm();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        
        cout << "\n" << string(50, '-') << "\n";
        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}
