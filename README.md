# OS Simulator Toolkit

A comprehensive **Operating System Simulator** built in C++17 that demonstrates core OS concepts through interactive console-based modules. Perfect for computer science students and educators to understand operating system algorithms hands-on.

## 🚀 Quick Start

### Prerequisites
- **Windows** with MinGW/GCC compiler
- **C++17** support
- Basic understanding of operating system concepts

### Build & Run
```bash
# Option 1: Using batch file (Windows)
.\build.bat

# Option 2: Manual compilation
g++ -std=c++17 -Iinclude simple_main.cpp src\cpu_scheduling\CPU_TEST.cpp src\disk_scheduling\disk_scheduling.cpp src\page_replacement\page_replacement.cpp src\memory_management\memory_management.cpp src\deadlock_detection\deadlock_detection.cpp -o os_simulator.exe

# Run the simulator
.\os_simulator.exe
```

### Clean Up
```bash
.\clean.bat
```

## 🎯 Features

### 1. 🔄 CPU Scheduling Algorithms
- **FCFS** (First Come First Served)
- **SJF** (Shortest Job First) 
- **Round Robin** with configurable time quantum
- **SJRF** (Shortest Job Remaining First)
- Interactive process input with arrival/burst times
- Displays turnaround time, waiting time, and scheduling tables

### 2. 💾 Memory Management  
- **First Fit** - Allocate first available block
- **Best Fit** - Allocate smallest suitable block
- **Worst Fit** - Allocate largest available block
- Memory fragmentation analysis
- Visual memory block representation

### 3. 📄 Page Replacement Algorithms
- **FIFO** (First In First Out)
- **LRU** (Least Recently Used)
- **Optimal** (Belady's Algorithm)
- **Clock** (Second Chance Algorithm)
- Page fault counting and frame visualization

### 4. 🌀 Disk Scheduling
- **FCFS** - First Come First Served
- **SSTF** - Shortest Seek Time First
- **SCAN** - Elevator Algorithm
- **LOOK** - Modified SCAN
- Head movement simulation with seek time calculation

### 5. 🧠 Deadlock Detection
- **Banker's Algorithm** implementation
- Safe/unsafe state detection
- Resource allocation matrix analysis
- Need matrix calculation and visualization

## 📁 Project Structure

```
OS-simulator-toolkit-main/
├── src/                          # Source files organized by module
│   ├── cpu_scheduling/           # CPU scheduling algorithms
│   ├── disk_scheduling/          # Disk scheduling algorithms
│   ├── memory_management/        # Memory allocation strategies
│   ├── page_replacement/         # Page replacement algorithms
│   ├── deadlock_detection/       # Banker's algorithm
│   └── synchronization/          # Thread synchronization (advanced)
├── include/                      # Header files
├── simple_main.cpp              # Main program entry point
├── build.bat                    # Windows build script
├── clean.bat                    # Cleanup script
├── BUILD.md                     # Detailed build instructions
└── README.md                    # This file
```

## 💡 Usage Examples

### CPU Scheduling
```
Enter choice: 1
Mode of Data Entry? 
1. Manually    2. Random Generated
Choose processes, arrival times, and burst times
See complete scheduling analysis with Gantt charts
```

### Memory Management
```
Enter choice: 4
Choose allocation strategy (First/Best/Worst Fit)
Input memory blocks and process sizes
Visualize memory allocation and fragmentation
```

### Page Replacement
```
Enter choice: 3
Set number of frames and page references
Choose algorithm (FIFO/LRU/Optimal/Clock)
Watch page fault simulation step-by-step
```

## 🛠️ Technical Details

- **Language**: C++17
- **Compiler**: GCC/MinGW
- **Platform**: Windows (PowerShell/Command Prompt)
- **Architecture**: Modular design with clean separation
- **Input**: Interactive console-based
- **Output**: Formatted tables, visual representations

## 📚 Educational Value

Perfect for learning:
- **CPU Scheduling** strategies and performance metrics
- **Memory Management** techniques and fragmentation
- **Page Replacement** policies and working sets
- **Disk I/O** optimization and seek algorithms  
- **Deadlock Prevention** and resource allocation
- **Operating System** design principles

## 🎓 Target Audience

- **Computer Science Students** studying Operating Systems
- **Educators** teaching OS concepts
- **Software Engineers** reviewing system fundamentals
- **Anyone** interested in understanding how operating systems work

## 🔧 Development

### Adding New Algorithms
1. Create new `.cpp` file in appropriate `src/` subdirectory
2. Add corresponding `.h` file in `include/`
3. Update `simple_main.cpp` with new menu option
4. Recompile using `build.bat`

### Project Highlights
- ✅ **Clean Architecture** - Organized, maintainable code
- ✅ **Educational Focus** - Clear, understandable implementations
- ✅ **Interactive** - User-friendly console interface
- ✅ **Comprehensive** - Multiple OS concepts in one tool
- ✅ **Portable** - Cross-platform C++ code

## 📄 License

This project is created for educational purposes. Feel free to use, modify, and distribute for learning and teaching operating system concepts.

---
