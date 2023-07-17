// print nth Palindrome number (n < 100)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 10)
        cout << n;
    else if (n == 10)
        cout << 11 * 1;
    else if (n == 11)
        cout << 11 * 2;
    else if (n == 12)
        cout << 11 * 3;
    else if (n == 13)
        cout << 11 * 4;
    else if (n == 14)
        cout << 11 * 5;
    else if (n == 15)
        cout << 11 * 6;
    else if (n == 16)
        cout << 11 * 7;
    else if (n == 17)
        cout << 11 * 8;
    else
        cout << 11 * 9;
    return 0;
}