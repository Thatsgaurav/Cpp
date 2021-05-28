// Write a program to find out whether a given character is an alphabet or not using functions.

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character\n";
    cin >> c;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout << c << " is an Alphabet.";
    }
    else
    {
        cout << c << " is not an Alphabet.";
    }

    return 0;
}