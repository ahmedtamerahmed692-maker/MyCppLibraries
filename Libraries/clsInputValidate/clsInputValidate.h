#pragma once

#include <iostream>
#include <string>
#include <limits>
#include "clsString.h"
#include "clsDate.h"

using namespace std;

/// @class clsInputValidate
/// @brief Robust input validation library for C++
/// 
/// This library provides comprehensive input validation functionality including:
/// - Range checking for multiple numeric types (short, int, float, double)
/// - Date validation and range checking
/// - Safe user input reading with automatic error handling
/// - Custom error messages for better user experience
/// - Automatic input buffer clearing on invalid input
///
/// Dependencies:
/// - clsString: Used for string manipulation during input validation
/// - clsDate: Used for date validation and range checking
///
/// All methods are static, enabling direct use without object instantiation.
class clsInputValidate
{
public:

	/// @brief Check if a number is within a specified range (short version)
	/// @param Number The number to check
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @return true if Number is between From and To (inclusive), false otherwise
	static bool IsNumberBetween(short Number, short From, short To)
	{
		return (Number >= From && Number <= To);
	}

	/// @brief Check if a number is within a specified range (int version)
	/// @param Number The number to check
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @return true if Number is between From and To (inclusive), false otherwise
	static bool IsNumberBetween(int Number, int From, int To)
	{
		return (Number >= From && Number <= To);
	}

	/// @brief Check if a number is within a specified range (float version)
	/// @param Number The number to check
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @return true if Number is between From and To (inclusive), false otherwise
	static bool IsNumberBetween(float Number, float From, float To)
	{
		return (Number >= From && Number <= To);
	}

	/// @brief Check if a number is within a specified range (double version)
	/// @param Number The number to check
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @return true if Number is between From and To (inclusive), false otherwise
	static bool IsNumberBetween(double Number, double From, double To)
	{
		return (Number >= From && Number <= To);
	}

	/// @brief Check if a date is within a specified date range
	/// @param Date The date to validate
	/// @param From The start date of the range (order doesn't matter)
	/// @param To The end date of the range (order doesn't matter)
	/// @return true if Date is between From and To (inclusive), false otherwise
	/// @note This method handles both ascending and descending date ranges
	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		// Check if Date is between From and To (both directions)
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			(clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
		)
		{
			return true;
		}

		// Check if Date is between To and From (reversed direction)
		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			(clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
		)
		{
			return true;
		}

		return false;
	}

	/// @brief Safely read an integer from user input with error handling
	/// @param ErrorMessage Custom error message displayed on invalid input
	/// @return The integer read from input
	/// @note Automatically clears input buffer on invalid input and repeats prompt
	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		int Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	/// @brief Safely read an integer within a specified range
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @param ErrorMessage Custom error message for out-of-range input
	/// @return The validated integer within the specified range
	/// @note Continues prompting until a valid number within range is entered
	static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		int Number = ReadIntNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber();
		}
		return Number;
	}

	/// @brief Safely read a double from user input with error handling
	/// @param ErrorMessage Custom error message displayed on invalid input
	/// @return The double read from input
	/// @note Automatically clears input buffer on invalid input and repeats prompt
	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		double Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	/// @brief Safely read a double within a specified range
	/// @param From The lower bound (inclusive)
	/// @param To The upper bound (inclusive)
	/// @param ErrorMessage Custom error message for out-of-range input
	/// @return The validated double within the specified range
	/// @note Continues prompting until a valid number within range is entered
	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		double Number = ReadDblNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}

	/// @brief Validate if a date object represents a valid date
	/// @param Date The date object to validate
	/// @return true if the date is valid, false otherwise
	/// @note This method checks for valid month (1-12), valid day (1-31), and leap year handling
	static bool IsValideDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}
};
