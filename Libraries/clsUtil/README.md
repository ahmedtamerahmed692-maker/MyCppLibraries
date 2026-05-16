# 🛠️ C++ Utility Library - `clsUtil`

A versatile C++ utility library providing a collection of general-purpose functions for random number generation, character manipulation, array operations, and basic text encryption/decryption. Designed to complement `clsDate` and `clsString` by offering essential helper functionalities.

## ✅ Core Features

### 🎲 Random Generation & Character Utilities
| Method | Description |
|--------|-------------|
| `Srand()` | Seeds the random number generator using current time. |
| `RandomNumber(From, To)` | Generates a random integer within a specified range. |
| `GetRandomCharacter(CharType)` | Returns a random character of a specified type (e.g., small letter, capital letter, digit, special character, or mixed). |
| `GenerateWord(CharType, Length)` | Generates a random word of a given length and character type. |
| `GenerateKey(CharType)` | Generates a formatted key string (e.g., `XXXX-XXXX-XXXX-XXXX`) using random characters. |
| `GenerateKeys(NumberOfKeys, CharType)` | Prints multiple generated keys to the console. |

### 🔄 Array & Data Manipulation
| Method | Description |
|--------|-------------|
| `FillArrayWithRandomNumbers(arr, arrLength, From, To)` | Fills an integer array with random numbers within a specified range. |
| `FillArrayWithRandomWords(arr, arrLength, CharType, Wordlength)` | Fills a string array with random words of a given type and length. |
| `FillArrayWithRandomKeys(arr, arrLength, CharType)` | Fills a string array with generated keys. |
| `Swap(A, B)` | Swaps the values of two variables of various types (int, double, bool, char, string, clsDate). |
| `ShuffleArray(arr, arrLength)` | Randomly shuffles the elements of an integer or string array. |

### 🔒 Text Encryption & Formatting
| Method | Description |
|--------|-------------|
| `Tabs(NumberOfTabs)` | Generates a string containing a specified number of tab characters. |
| `EncryptText(Text, EncryptionKey)` | Encrypts a given text using a simple Caesar cipher-like shift. |
| `DecryptText(Text, EncryptionKey)` | Decrypts a given text using the corresponding key. |

## 🚀 How to Use

Include the `clsUtil.h` header in your C++ project. Note that `clsUtil` depends on `clsDate` for its `Swap(clsDate&, clsDate&)` overload, so ensure `clsDate.h` is also accessible.

```cpp
#include <iostream>
#include "clsUtil.h"
#include "clsDate.h" // Required for clsDate-specific Swap overload

int main()
{
    // Seed the random number generator once at the start of your program
    clsUtil::Srand(); 

    // Example: Generate a random number
    int randomNumber = clsUtil::RandomNumber(1, 100);
    std::cout << "Random Number: " << randomNumber << std::endl;

    // Example: Generate a random word
    std::string randomWord = clsUtil::GenerateWord(clsUtil::CapitalLetter, 7);
    std::cout << "Random Word: " << randomWord << std::endl;

    // Example: Swap two integers
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    clsUtil::Swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    // Example: Encrypt and Decrypt text
    std::string originalText = "Secret Message";
    short key = 5;
    std::string encryptedText = clsUtil::EncryptText(originalText, key);
    std::string decryptedText = clsUtil::DecryptText(encryptedText, key);
    std::cout << "Original: " << originalText << ", Encrypted: " << encryptedText << ", Decrypted: " << decryptedText << std::endl;

    return 0;
}
```

## 🗂️ Technical Details

- **Built With**: C++
- **Dependencies**: `clsDate` (for `Swap` overload)
- **Compilation**: Requires a standard C++ Compiler (C++11 or higher). Ensure all required header files (`clsUtil.h`, `clsDate.h`, `clsString.h`) are correctly included in your project's include paths.

## 👨‍💻 Developer

**Ahmed Tamer**
Computer Science Student at New Mansoura University (NMU).
