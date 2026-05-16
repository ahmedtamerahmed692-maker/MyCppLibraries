# My C++ Libraries Monorepo

Welcome to the My C++ Libraries Monorepo! This repository serves as a centralized collection of reusable C++ utility classes developed by Ahmed Tamer. It consolidates various functionalities, including advanced date management, robust string manipulation, general-purpose utilities, and input validation into a single, organized structure.

## 🌟 Libraries Included

This monorepo currently contains the following C++ libraries:

- **clsString**: A comprehensive class for string manipulation, offering functionalities like case conversion, word counting, splitting, trimming, and more.
- **clsDate**: An advanced date management library that handles date arithmetic, calendar generation, business day calculations, and date comparisons.
- **clsUtil**: A versatile utility library providing functions for random number generation, character handling, array operations, and basic text encryption/decryption.
- **clsInputValidate**: A robust input validation library providing safe user input reading, range checking for numbers and dates, and comprehensive date validation.

## 🚀 Getting Started

To use these libraries in your C++ projects, you can include the respective header files directly. The libraries are designed to be modular, with clsDate depending on clsString, clsUtil depending on clsDate, and clsInputValidate depending on clsDate for date validation functionalities.

### Project Structure

MyCppLibraries/
├── Libraries/
│   ├── clsDate/
│   │   ├── clsDate.h
│   │   └── README.md
│   ├── clsString/
│   │   ├── clsString.h
│   │   └── README.md
│   ├── clsUtil/
│   │   ├── clsUtil.h
│   │   └── README.md
│   └── clsInputValidate/
│       ├── clsInputValidate.h
│       └── README.md
├── Examples/
│   └── main.cpp
└── README.md

### Example Usage

An Examples/main.cpp file is provided to demonstrate how to integrate and use all four libraries within a single project. You can compile and run this example to see the functionalities in action.

```cpp
#include &lt;iostream&gt;
#include "Libraries/clsString/clsString.h"
#include "Libraries/clsDate/clsDate.h"
#include "Libraries/clsUtil/clsUtil.h"
#include "Libraries/clsInputValidate/clsInputValidate.h"

int main()
{
    // clsString Example
    clsString myString("hello monorepo");
    myString.UpperFirstLetterOfEachWord();
    std::cout &lt;&lt; "Formatted String: " &lt;&lt; myString.Value &lt;&lt; std::endl;

    // clsDate Example
    clsDate today;
    std::cout &lt;&lt; "Today: " &lt;&lt; today.DateToString() &lt;&lt; std::endl;

    // clsUtil Example
    clsUtil::Srand();
    std::cout &lt;&lt; "Random Number (1-100): " &lt;&lt; clsUtil::RandomNumber(1, 100) &lt;&lt; std::endl;

    // clsInputValidate Example
    std::cout &lt;&lt; "Enter your age (1-120): ";
    int age = clsInputValidate::ReadIntNumberBetween(1, 120);
    std::cout &lt;&lt; "Your age: " &lt;&lt; age &lt;&lt; std::endl;

    return 0;
}
