// Time complexity: O(log(n))

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a = 0, i = n;
    while (i >= 1)
    {
        a = a + 1;
        i /= 2;
    }

    return 0;
}
