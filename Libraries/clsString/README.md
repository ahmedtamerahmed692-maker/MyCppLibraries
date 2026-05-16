# clsString - C++ String Utility Class

A powerful C++ class that extends the built-in string functionality with many useful methods for string manipulation and analysis.

## Features

### 📏 Basic
| Method | Description |
|--------|-------------|
| `Length()` | Get string length |
| `CountWords()` | Count words in string |
| `Value` | Property to get/set string value |

### 🔤 Case Manipulation
| Method | Description |
|--------|-------------|
| `UpperFirstLetterOfEachWord()` | Capitalize first letter of each word |
| `LowerFirstLetterOfEachWord()` | Lowercase first letter of each word |
| `UpperAllString()` | Convert entire string to uppercase |
| `LowerAllString()` | Convert entire string to lowercase |
| `InvertLetterCase()` | Invert case of a single character |
| `InvertAllLettersCase()` | Invert case of all characters |

### 🔢 Counting
| Method | Description |
|--------|-------------|
| `CountLetters()` | Count letters (All/Capital/Small) |
| `CountCapitalLetters()` | Count uppercase letters |
| `CountSmallLetters()` | Count lowercase letters |
| `CountSpecificLetter()` | Count occurrences of a specific letter |
| `CountVowels()` | Count vowel letters |
| `IsVowel()` | Check if a character is a vowel |

### ✂️ Trimming
| Method | Description |
|--------|-------------|
| `TrimLeft()` | Remove leading spaces |
| `TrimRight()` | Remove trailing spaces |
| `Trim()` | Remove leading and trailing spaces |

### 🔧 Manipulation
| Method | Description |
|--------|-------------|
| `Split()` | Split string by delimiter into vector |
| `JoinString()` | Join vector or array into string |
| `ReverseWordsInString()` | Reverse word order in string |
| `ReplaceWord()` | Replace a word with another |
| `RemovePunctuations()` | Remove all punctuation characters |

## Usage

```cpp
#include "clsString.h"

int main()
{
    // Create object
    clsString str("hello world");

    // Use Normal Methods
    str.UpperFirstLetterOfEachWord();
    cout << str.Value << endl; // Hello World

    // Use Static Methods
    cout << clsString::CountWords("One Two Three") << endl; // 3

    // Split
    vector<string> words = str.Split(" ");

    // Join
    cout << clsString::JoinString(words, "-") << endl; // Hello-World

    return 0;
}
```

## Key Design Concepts

- Every method has two versions:
  - **Static** → works on any string you pass
  - **Normal** → works directly on the object's value

```cpp
// Static - pass any string
clsString::CountWords("Hello World"); // 2

// Normal - works on object value
clsString str("Hello World");
str.CountWords(); // 2
```

## Built With
- C++
- OOP Principles
- Encapsulation
- Static Members
- Method Overloading

## 👨‍💻 Developer
**Ahmed Tamer**  
Computer Science Student at New Mansoura University (NMU).

*Credits: Logic and structure inspired by the C++ OOP & Problem Solving learning tracks provided by ProgrammingAdvices.com (Eng. Mohammed Abu-Hadhoud).*