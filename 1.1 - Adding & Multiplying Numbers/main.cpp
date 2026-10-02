/*
 Project description:
 Write a C++ program that reads in two integers and then outputs both their sum and their product.
 One way to proceed is to start with the program in Display 1.8 and to then modify that program to produce the program for this project. Be certain to type the first line of your program exactly the same as the first line in Display 1.8. In particular, be sure that the first line begins at the left-hand end of the line with no space before or after the # symbol. Also, be certain to add the symbols \n to the last output statement in your program. For example, the last output statement might be the following:
         cout << "This is the end of the program.\n";
         (Some systems require that final \n, and your system may be one of these.)
*/

#include <iostream>
#include <string>
using namespace std;



//Asks the given question until the user puts in an integer
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
                return num;
            }
            
            cout << "Please enter a whole number\n\n";
        }
        catch (invalid_argument) //If the user didn't put in a number
        {
            cout << "Please enter a number\n\n";
        }
    }
}



int main()
{
    //Asks for the numbers
    int num1 = askInt("Enter the first number: ");
    int num2 = askInt("Enter the second number: ");
    
    //Prints out the sum and product
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
    
    return 0;
}
