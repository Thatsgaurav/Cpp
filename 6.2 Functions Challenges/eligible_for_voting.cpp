// Write a program using functions to check if a person is eligible for voting or not by comparing his age with legal voting age i.e.18.

#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter age of a user:";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible for voting";
    }
    else
    {
        cout << "You are not eligible for voting";
    }

    return 0;
}