// Write a program to print the ASCII value of any given character.

#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;
    cout << "ASCII value of " << c << " is :  " << (int)c;
    return 0;
}
