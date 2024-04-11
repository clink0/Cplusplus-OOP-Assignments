/*
Write program that prompts the user to enter two integers. Handle any potential
exceptions that may arise when the user enters non-integer values or tries to divide by
zero. If an exception occurs, print an error message and allow the user to try again or
quit.
*/


#include <iostream>
#include <exception>
#include <string>


using namespace std;


bool isInt(const string& input)
{
    if (input.empty())
    {
        return false;
    }
    for (int i = ( (input[0] == '-' || input[0] == '+') ? 1 : 0 ); i < input.size(); i++) {
        if (!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}


int main() {

    int num1, num2;
    string feux;

    cout << "Enter your first integer: " << endl;
    while (true) {
        getline(cin, feux);
        if (isInt(feux))
        {
            try
            {
                num1 = stoi(feux);
                break;
            }
            catch(const out_of_range& e)
            {
                cout << "Input is not an integer." << '\n';
            }
        }
        else
        {
            cerr << "Input is not an integer." << '\n';
        }
    }

    cout << "Enter your second integer: " << endl;
    while (true) {
        getline(cin, feux);
        if (isInt(feux))
        {
            try
            {
                num2 = stoi(feux);
                break;
            }
            catch(const out_of_range& e)
            {
                cerr << "Input is not an integer." << '\n';
            }     
        }
        else
        {
            cerr << "Input is not an integer." << '\n';
        }
    }


    cout << "You entered the integers: " << num1 << " and " << num2 << '\n';

    cout << "Now we attempt to divide " << num1 << " by " << num2 << '\n';
    try
    {
        if (num2 == 0)
        {
            throw domain_error("Division by zero is not possible.");  //throw
        } 
        else
        {
            double quotient = num1/num2;
            cout << num1 << " / " << num2 << " = " << quotient << '\n';
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
};