# 📅🔤 C++ Date and String Utility Library

A powerful, custom-built C++ library that extends built-in functionalities. It includes `clsDate` for handling complex date calculations, calendar printing, and business logic effortlessly, along with `clsString`, a text manipulation helper class serving as a foundation for string parsing.

## 📌 Project Evolution
This repository combines two core utilities designed to make working with dates and strings in C++ clean, efficient, and object-oriented.

- **`clsDate`**: A comprehensive date management tool handling everything from basic arithmetic to advanced business logic and leap-year calculations.
- **`clsString`**: A fast text manipulation helper class to slice, trim, format, and analyze string data.

---

## 📅 `clsDate` - Advanced Date Management

### ✅ Core Features

#### 🏗️ Constructors & Flexibility
| Method | Description |
|--------|-------------|
| `clsDate()` | Initialize automatically using current system date |
| `clsDate(string)` | Parse and create date from formatted strings (e.g., `"15/10/2024"`) |
| `clsDate(Day, Month, Year)` | Create date explicitly using Day, Month, and Year |
| `clsDate(DateOrder, Year)` | Construct a date based on its day order within a year |

#### ➕➖ Date Arithmetic
| Method | Description |
|--------|-------------|
| `AddOneDay()` / `DecreaseDateByOneDay()` | Increase/Decrease date by 1 day |
| `AddDays(Days)` | Add a specific number of days to the date |
| `IncreaseDateByXWeeks(Weeks)` | Increase date by a given number of weeks |
| `IncreaseDateByXMonths(Months)` | Increase date by a given number of months |
| `IncreaseDateByXYears(Years)` | Increase date by a given number of years |
| `IncreaseDateByOneDecade()` | Add 10 years to the date |
| `IncreaseDateByOneCentury()` | Add 100 years to the date |

#### 🏢 Business & Vacation Logic
| Method | Description |
|--------|-------------|
| `IsBusinessDay()` | Check if the date is a standard working day |
| `IsWeekEnd()` | Check if the date falls on a weekend |
| `CalculateBusinessDays()` | Get total business days between two dates |
| `CalculateVacationReturnDate()` | Determine exact return-to-work date post-vacation |

#### 🖨️ Formatting & Visualization
| Method | Description |
|--------|-------------|
| `Print()` | Print date in `DD/MM/YYYY` format |
| `DateToString()` | Convert date object to string |
| `PrintMonthCalendar()` | Print a fully formatted month calendar to the console |
| `PrintYearCalendar()` | Print the entire year's calendar |
| `DayShortName()` / `MonthShortName()` | Get the short string name of the day or month |

#### 🧮 Advanced Calculations
| Method | Description |
|--------|-------------|
| `IsValid()` | Validate if the date is correct (handles leap years) |
| `isLeapYear()` | Check if the current year is a leap year |
| `IsDateBeforeDate2()` | Check if a date comes before another |
| `GetDifferenceInDays()` | Calculate exact number of days between two dates |
| `CalculateMyAgeInDays()` | Calculate precise age in days from birthdate |

---

## 🔤 `clsString` - String Utility Class

### ✅ Core Features
#### 📏 Basic & Counting
| Method | Description |
|--------|-------------|
| `Length()` | Get string length |
| `CountWords()` | Count words in a string |
| `CountLetters()` | Count letters (All/Capital/Small) |
| `CountVowels()` | Count vowel letters |
| `IsVowel()` | Check if a character is a vowel |

#### 🔤 Case Manipulation
| Method | Description |
|--------|-------------|
| `UpperFirstLetterOfEachWord()` | Capitalize first letter of each word |
| `LowerFirstLetterOfEachWord()` | Lowercase first letter of each word |
| `UpperAllString()` | Convert entire string to uppercase |
| `LowerAllString()` | Convert entire string to lowercase |
| `InvertAllLettersCase()` | Invert case of all characters |

#### ✂️ Trimming & Manipulation
| Method | Description |
|--------|-------------|
| `TrimLeft()` / `TrimRight()` / `Trim()` | Remove leading/trailing spaces |
| `Split()` | Split string by delimiter into a vector |
| `JoinString()` | Join vector or array into a string |
| `ReverseWordsInString()` | Reverse word order in string |
| `ReplaceWord()` | Replace a word with another |
| `RemovePunctuations()` | Remove all punctuation characters |

---

## 🧠 Key Design Concepts
**Dual-Method Architecture:**
Every utility method generally has two versions:
- **Static**: Works directly on any string/date passed as a parameter.
- **Normal**: Works inherently on the object's instantiated state.

```cpp
// Static - pass any string
clsString::CountWords("Hello World"); // 2

// Normal - works on object value
clsString str("Hello World");
str.CountWords(); // 2
```

---

## 🚀 How to Run (Usage Example)

Include the header files in your C++ project to get started:

```cpp
#include <iostream>
#include "clsDate.h"
#include "clsString.h"

using namespace std;

int main()
{
    // --- clsDate Usage ---
    clsDate Today;
    cout << "Today is: ";
    Today.Print();

    clsDate CustomDate("20/12/2022");
    if (CustomDate.IsValid()) {
        cout << "Custom Date: " << CustomDate.DateToString() << endl;
    }

    CustomDate.PrintMonthCalendar();

    // --- clsString Usage ---
    clsString str("hello world from c++");
    str.UpperFirstLetterOfEachWord();
    cout << "\nFormatted String: " << str.Value << endl;

    vector<string> words = str.Split(" ");
    cout << "Word Count: " << clsString::CountWords(str.Value) << endl;

    return 0;
}
```

---

## 🗂️ Technical Structure & Compilation
- **Built With**: C++ 
- **OOP Principles**: Encapsulation, Static Members, Method Overloading
- **Compilation**: Requires a standard C++ Compiler (C++11 or higher). Ensure `clsDate.h` and `clsString.h` are in your execution directory.

---

## 👨‍💻 Developer
**Ahmed Tamer**  
Computer Science Student at New Mansoura University (NMU).

*Credits: Logic and structure inspired by the C++ OOP & Problem Solving learning tracks provided by ProgrammingAdvices.com (Eng. Mohammed Abu-Hadhoud).*
