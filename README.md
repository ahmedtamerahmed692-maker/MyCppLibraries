# 📚 My C++ Libraries Monorepo

Welcome to the **My C++ Libraries Monorepo**! This repository serves as a centralized collection of reusable C++ utility classes developed by Ahmed Tamer. It consolidates various functionalities, including string manipulation, date handling, and utility functions, all organized in a clean monorepo structure.

## 🌟 Libraries Included

This monorepo currently contains the following C++ libraries:

1.  **`clsString`**: A comprehensive class for string manipulation, offering functionalities like case conversion, word counting, splitting, trimming, and more.
2.  **`clsDate`**: An advanced date management library that handles date arithmetic, calendar generation, business day calculations, and date comparisons.
3.  **`clsUtil`**: A versatile utility library providing functions for random number generation, character handling, array operations, and basic text encryption/decryption.

## 🚀 Getting Started

To use these libraries in your C++ projects, you can include the respective header files directly. The libraries are designed to be modular, with `clsDate` depending on `clsString` and `clsUtil` depending on `clsDate` for certain functionalities.

### Project Structure

```
MyCppLibraries/
├── Libraries/
│   ├── clsDate/
│   │   └── clsDate.h
│   ├── clsString/
│   │   └── clsString.h
│   └── clsUtil/
│       └── clsUtil.h
├── Examples/
│   └── main.cpp
└── README.md
```

### Example Usage

An `Examples/main.cpp` file is provided to demonstrate how to integrate and use all three libraries within a single project. You can compile and run this example to see the functionalities in action.

```cpp
#include <iostream>
#include "Libraries/clsString/clsString.h"
#include "Libraries/clsDate/clsDate.h"
#include "Libraries/clsUtil/clsUtil.h"

int main()
{
    // clsString Example
    clsString myString("hello monorepo");
    myString.UpperFirstLetterOfEachWord();
    std::cout << "Formatted String: " << myString.Value << std::endl;

    // clsDate Example
    clsDate today;
    std::cout << "Today: " << today.DateToString() << std::endl;

    // clsUtil Example
    clsUtil::Srand();
    std::cout << "Random Number (1-100): " << clsUtil::RandomNumber(1, 100) << std::endl;

    return 0;
}
```

### Compilation

To compile your project using these libraries, ensure that your compiler can find the header files. For GCC/Clang, you might use a command similar to this (assuming you are in the `MyCppLibraries` directory):

```bash
g++ Examples/main.cpp -o main.out -I./Libraries
./main.out
```

For Visual Studio, add the `MyCppLibraries/Libraries` directory to your project's additional include directories.

## 🤝 Dependencies

- `clsDate` depends on `clsString`.
- `clsUtil` depends on `clsDate` (specifically for the `Swap(clsDate&, clsDate&)` overload).

When including `clsUtil.h`, ensure that `clsDate.h` is also accessible in your include paths.

## 👨‍💻 Developer

**Ahmed Tamer**
Computer Science Student at New Mansoura University (NMU).
