/*
   The pattern

     ..*..
     .***.
     *****
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int m = 1; m <= n - i; ++m)
            cout << ".";
        for (int j = 0; j <= s; ++j)
            cout << "*";
        for (int k = 1; k <= n - i; ++k)
            cout << ".";

        cout << "\n";
        s+=2;
    }
    return 0;
}