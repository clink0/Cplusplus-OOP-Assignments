/*
Write a recursive function that takes in a string and returns true/false if the string
is a palindrome or isn’t. For example, your coulde should return true if your string is
racecar and false if your string is program. Be sure to test against a few examples.
*/

#include <iostream>
#include <string>

using namespace std;

bool isPal(string &text, int start, int end)
{
    if (start >= end)
        return true;
    
    if (text[start] != text[end])
        return false;
    
    return isPal(text, start + 1, end -1);
}


int main()
{
    string test = "racecar";
    int start = 0;
    int end = test.length() - 1;
    if (isPal(test, start, end))
        cout << test << " is a palindrome!" << endl;
    else
        cout << test << " is not a palindrome!" << endl;

    return 0;
}