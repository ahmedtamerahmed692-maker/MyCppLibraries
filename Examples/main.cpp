#include <iostream>
#include <string>
#include <vector>
#include "../Libraries/clsString/clsString.h"
#include "../Libraries/clsDate/clsDate.h"
#include "../Libraries/clsUtil/clsUtil.h"

using namespace std;

int main()
{
    // --- clsString Usage ---
    cout << "\n--- clsString Usage ---\n";
    clsString str("hello world from c++");
    cout << "Original String: " << str.Value << endl;
    str.UpperFirstLetterOfEachWord();
    cout << "Formatted String: " << str.Value << endl;

    vector<string> words = str.Split(" ");
    cout << "Word Count: " << clsString::CountWords(str.Value) << endl;
    cout << "Is 'e' a vowel? " << (clsString::IsVowel('e') ? "Yes" : "No") << endl;
    cout << "Trimmed String: " << clsString::Trim("   leading and trailing spaces   ") << endl;

    // --- clsDate Usage ---
    cout << "\n--- clsDate Usage ---\n";
    clsDate Today;
    cout << "Today is: ";
    Today.Print();

    clsDate CustomDate("20/12/2024");
    if (CustomDate.IsValid()) {
        cout << "Custom Date: " << CustomDate.DateToString() << endl;
    }
    cout << "Is 2024 a leap year? " << (clsDate::isLeapYear(2024) ? "Yes" : "No") << endl;
    cout << "Days in December 2024: " << clsDate::NumberOfDaysInAMonth(12, 2024) << endl;
    CustomDate.PrintMonthCalendar();

    // --- clsUtil Usage ---
    cout << "\n--- clsUtil Usage ---\n";
    clsUtil::Srand(); // Seed random number generator
    cout << "Random Number (1-10): " << clsUtil::RandomNumber(1, 10) << endl;
    cout << "Random Capital Letter: " << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
    cout << "Generated Word (5 chars): " << clsUtil::GenerateWord(clsUtil::MixChars, 5) << endl;
    cout << "Generated Key: " << clsUtil::GenerateKey() << endl;

    int arr[100];
    clsUtil::FillArrayWithRandomNumbers(arr, 5, 1, 100);
    cout << "First 5 random numbers in array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    clsUtil::Swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    clsDate dateA(1, 1, 2024), dateB(1, 1, 2025);
    cout << "Before date swap: DateA = " << dateA.DateToString() << ", DateB = " << dateB.DateToString() << endl;
    clsUtil::Swap(dateA, dateB);
    cout << "After date swap: DateA = " << dateA.DateToString() << ", DateB = " << dateB.DateToString() << endl;

    cout << "Encrypted 'Hello': " << clsUtil::EncryptText("Hello", 3) << endl;
    cout << "Decrypted 'Khoor': " << clsUtil::DecryptText("Khoor", 3) << endl;

    return 0;
}
