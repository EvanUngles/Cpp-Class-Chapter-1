/*
 Project description:
 Write a program that allows the user to enter a number of quarters, dimes, and nickels and then outputs the monetary value of the coins in cents.
 For example, if the user enters 2 for the number of quarters, 3 for the number of dimes, and 1 for the number of nickels, then the program should output that the coins are worth 85 cents.
*/

#include <iostream>
#include <string>
using namespace std;



//Asks the given question until the user puts in a positive integer
int askInt(string question)
{
    string response;
    while (true)
    {
        try
        {
            cout << question;
            cin >> response;
            
            //Tries to convert the response to a number and store it in num
            double num = stod(response);
            
            //Checks if the user put in a whole number
            if (num == static_cast<int>(num))
            {
                //Returns the number if it's positive or 0
                if (num >= 0)
                {
                    return num;
                }
                cout << "Please enter a positive number\n\n";
            }
            else
            {
                cout << "Please enter a whole number\n\n";
            }
        }
        catch (invalid_argument) //If the user didn't put in a number
        {
            cout << "Please enter a number\n\n";
        }
    }
}



int main()
{
    //Asks for the number of quarters, dimes, and nickels
    int numQuarters = askInt("Enter the number of quarters: ");
    int numDimes = askInt("Enter the number of dimes: ");
    int numNickels = askInt("Enter the number of nickels: ");
    
    //Prints out the information
    cout << "The value of "<< numQuarters <<" quarter(s), "<< numDimes <<" dime(s), and "<< numNickels <<" nickel(s) is: ";
    cout << (25*numQuarters)+(10*numDimes)+(5*numNickels) <<" cents\n";
    
    return 0;
}
