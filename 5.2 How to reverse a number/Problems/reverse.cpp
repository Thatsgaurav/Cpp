// Write a program to reverse a number E.g Given a number 1879 we need to convert it to 9781. 100020 will be converted to 20001(Note : We need to remove the trailing zeroes).

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
}