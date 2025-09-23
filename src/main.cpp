#include "../include/menu_system.h"
#include "../include/common.h"

// Include original module headers (temporary - will be refactored)
#include "../CPU_TEST.h"
#include "../disk_scheduling.h"
#include "../page_replacement.h"
#include "../memory_management.h"
#include "../deadlock_detection.h"
#include "../dynamic_semaphore.h"

// Wrapper functions for original modules (temporary)
void cpuSchedulingMenu() {
    Display::printHeader("CPU SCHEDULING ALGORITHMS");
    runCPUScheduling();  // Call original function
}

void diskSchedulingMenu() {
    Display::printHeader("DISK SCHEDULING ALGORITHMS");
    disk_scheduling();
}

void pageReplacementMenu() {
    Display::printHeader("PAGE REPLACEMENT ALGORITHMS");
    runPageReplacement();
}

void memoryManagementMenu() {
    Display::printHeader("MEMORY MANAGEMENT ALGORITHMS");
    simulateMemoryManagement();
}

void deadlockDetectionMenu() {
    Display::printHeader("DEADLOCK DETECTION");
    runBankersAlgorithm();
}

void synchronizationMenu() {
    Display::printHeader("SYNCHRONIZATION PROBLEMS");
    cout << "Threading module temporarily disabled for compilation.\n";
    // runSynchronizationSimulation();
}

int main() {
    MenuSystem menu;
    menu.run();
    return 0;
}
