# Algorithms in C

A collection of common algorithms and data structures implemented in C for educational purposes and practical use.

## Project Overview

This project provides implementations of fundamental algorithms and data structures.
I will put data structures and algorithms here as time goes by; for more extensive background on a given implementation, refer to my website pontuselmrin.github.io.

## 🚀 Getting Started

### Prerequisites
- CMake 3.14 or higher
- A C compiler (GCC, Clang, or MSVC)

### Building

```bash
# Configure the project
cmake --preset=dev

# Build the project
cmake --build build

# Run tests
ctest --test-dir build
```

For more detailed build instructions, see [BUILDING](BUILDING.md).

## 📖 Usage

```c
#include "algos/sorting.h"

int main(void) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Sort the array
    quick_sort(arr, 0, n - 1);
    
    return 0;
}
```

## 🤝 Contributing

Contributions are welcome! Please see [CONTRIBUTING](CONTRIBUTING.md) for details on how to contribute to this project.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
