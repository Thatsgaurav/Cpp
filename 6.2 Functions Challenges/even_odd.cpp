// Write a program to find out whether a given number is even or odd using functions.

#include <iostream>
using namespace std;

int isEven(int n)
{
    return !(n & 1);
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (isEven(n))
    {
        cout << "Even number";
    }
    else
    {
        {
            cout << "Odd number";
        }
    }

    return 0;
}
