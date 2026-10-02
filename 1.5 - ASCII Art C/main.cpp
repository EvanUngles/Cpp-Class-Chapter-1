/*
 Project description:
 Write a program that inputs a character from the keyboard and then outputs a large block letter “C” composed of that character.
 For example, if the user inputs the character “X,” then the output should look as follows:
   X X X
  X    X
 X
 X
 X
 X
 X
  X    X
   X X X
*/

#include <iostream>
using namespace std;

int main()
{
    //Asks for the character to make the C out of
    char c;
    cout << "Enter the character to make the C out of: ";
    cin >> c;
    
    //Prints the C
    cout << "  "<< c <<" "<< c <<" "<< c <<"\n";
    cout << " "<< c <<"    "<< c <<"\n";
    cout << c <<"\n";
    cout << c <<"\n";
    cout << c <<"\n";
    cout << c <<"\n";
    cout << c <<"\n";
    cout << " "<< c <<"    "<< c <<"\n";
    cout << "  "<< c <<" "<< c <<" "<< c <<"\n";
    return 0;
}
