#include <iostream>
#include "../Libraries/clsInputValidate/clsInputValidate.h"
#include "../Libraries/clsDate/clsDate.h"

using namespace std;

void PrintSeparator(string title = "")
{
    cout << "\n" << string(50, '=') << endl;
    if (!title.empty())
        cout << "  " << title << endl << string(50, '=') << endl;
}

int main()
{
    PrintSeparator("clsInputValidate - Input Validation Library Demo");

    // Example 1: Integer Range Validation
    PrintSeparator("Example 1: Integer Range Validation");
    cout << "Enter a number (1-100): ";
    int num1 = clsInputValidate::ReadIntNumberBetween(
        1, 100,
        "Invalid! Please enter a number between 1-100:\n"
    );
    cout << "You entered: " << num1 << endl;

    // Example 2: Age Validation
    PrintSeparator("Example 2: Age Validation");
    cout << "Enter your age (1-120): ";
    int age = clsInputValidate::ReadIntNumberBetween(
        1, 120,
        "Invalid age! Please enter a valid age (1-120):\n"
    );
    cout << "Your age: " << age << " years old" << endl;

    // Example 3: Score Validation
    PrintSeparator("Example 3: Grade/Score Validation");
    cout << "Enter your grade (0-100): ";
    double grade = clsInputValidate::ReadDblNumberBetween(
        0.0, 100.0,
        "Invalid! Please enter a grade between 0-100:\n"
    );
    cout << "Your grade: " << grade << "%" << endl;

    // Example 4: Static Range Check
    PrintSeparator("Example 4: Static Range Checking");
    int testValue = 50;
    cout << "Test Value: " << testValue << endl;
    cout << "Is 50 between 0-100? " << (clsInputValidate::IsNumberBetween(testValue, 0, 100) ? "Yes" : "No") << endl;
    cout << "Is 50 between 60-100? " << (clsInputValidate::IsNumberBetween(testValue, 60, 100) ? "Yes" : "No") << endl;

    // Example 5: Double Number Validation
    PrintSeparator("Example 5: Double Number Validation");
    cout << "Enter temperature (0.0-50.0 C): ";
    double temperature = clsInputValidate::ReadDblNumberBetween(
        0.0, 50.0,
        "Temperature out of range! Try again (0.0-50.0 C):\n"
    );
    cout << "Temperature: " << temperature << " C" << endl;

    // Example 6: Date Validation
    PrintSeparator("Example 6: Date Validation");
    clsDate testDate(15, 6, 2024);
    cout << "Test Date: " << testDate.DateToString() << endl;
    cout << "Is Valid Date? " << (clsInputValidate::IsValideDate(testDate) ? "Yes" : "No") << endl;

    // Example 7: Date Range Validation
    PrintSeparator("Example 7: Date Range Validation");
    clsDate startDate(1, 1, 2024);
    clsDate endDate(31, 12, 2024);
    clsDate checkDate(15, 6, 2024);

    cout << "Start Date: " << startDate.DateToString() << endl;
    cout << "End Date: " << endDate.DateToString() << endl;
    cout << "Check Date: " << checkDate.DateToString() << endl;
    cout << "Is Check Date between Start and End? "
         << (clsInputValidate::IsDateBetween(checkDate, startDate, endDate) ? "Yes" : "No") << endl;

    // Example 8: User Registration Form
    PrintSeparator("Example 8: User Registration Form");

    cout << "\n📋 Please fill in your profile:\n" << endl;

    cout << "Enter minimum salary (1000-500000): ";
    int minSalary = clsInputValidate::ReadIntNumberBetween(
        1000, 500000,
        "Invalid salary! Please enter between 1000-500000:\n"
    );

    cout << "\nEnter maximum salary (" << minSalary << "-1000000): ";
    int maxSalary = clsInputValidate::ReadIntNumberBetween(
        minSalary, 1000000,
        "Invalid salary! Please enter a value >= minimum salary:\n"
    );

    cout << "\nEnter experience (0-50 years): ";
    int experience = clsInputValidate::ReadIntNumberBetween(
        0, 50,
        "Invalid experience! Please enter between 0-50 years:\n"
    );

    PrintSeparator("Profile Summary");
    cout << "\n✅ Minimum Salary: $" << minSalary << endl;
    cout << "✅ Maximum Salary: $" << maxSalary << endl;
    cout << "✅ Experience: " << experience << " years" << endl;

    if (experience < 2) {
        cout << "\n📚 Status: Junior Developer" << endl;
    }
    else if (experience < 5) {
        cout << "\n👨‍💼 Status: Mid-Level Developer" << endl;
    }
    else {
        cout << "\n⭐ Status: Senior Developer" << endl;
    }

    PrintSeparator("Demo Completed!");
    cout << endl;

    return 0;
}
