/*
Write a program that asks a user for their date of birth in some numeric form, such as
5-12-1996 and returns the date of birth in the form May 12, 1996. Your program should
contain exception classes invalidDay , invalidMonth, and invalidYear. So if a user
enters, say, 6-42-2001, the program should throw and catch an invalidDay object.
Follow similar conventions for the month and year as well. Be sure your program
handles leap years too!
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>

using namespace std;

class InvalidDay : public exception {
public:
    const char* what() const throw() {
        return "You entered an invalid day.";
    }
};

class InvalidMonth : public exception {
public:
    const char* what() const throw() {
        return "You entered an invalid month.";
    }
};

class InvalidYear : public exception {
public:
    const char* what() const throw() {
        return "You entered an invalid year.";
    }
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void validateDate(int day, int month, int year) 
{
    if (year < 0) 
        throw InvalidYear();
    if (month < 1 || month > 12) 
        throw InvalidMonth();
    
    vector<int> daysPerMonth;
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(28 + isLeapYear(year));
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(30);
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(30);
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(30);
    daysPerMonth.push_back(31);
    daysPerMonth.push_back(30);
    daysPerMonth.push_back(31);
    
    if (day < 1 || day > daysPerMonth[month - 1]) 
        throw InvalidDay();
}

string monthToString(int month) {
    vector<string> months;
    months.push_back("January");
    months.push_back("February");
    months.push_back("March");
    months.push_back("April");
    months.push_back("May");
    months.push_back("June");
    months.push_back("July");
    months.push_back("August");
    months.push_back("September");
    months.push_back("October");
    months.push_back("November");
    months.push_back("December");

    return months.at(month - 1);
}

int main() {
    string input;
    cout << "Enter your date of birth (MM-DD-YYYY): ";
    getline(cin, input);
    
    stringstream ss(input);
    vector<int> dateParts;
    string part;

    while (getline(ss, part, '-')) 
    {
        dateParts.push_back(stoi(part));
    }

    try {
        if (dateParts.size() != 3) 
            throw invalid_argument("Invalid date format.");
        
        validateDate(dateParts[1], dateParts[0], dateParts[2]);
        
        cout << "Your date of birth is: "
                  << monthToString(dateParts[0]) << " "
                  << dateParts[1] << ", "
                  << dateParts[2] << endl;
    } catch (InvalidDay& e) {
        cout << e.what() << endl;
    } catch (InvalidMonth& e) {
        cout << e.what() << endl;
    } catch (InvalidYear& e) {
        cout << e.what() << endl;
    } catch (exception& e) {
        cout << "An error occurred: " << e.what() << endl;
    }

    return 0;
}