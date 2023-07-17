/*
   The pattern

     12321
     .121.
     ..1..
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, tmp;

    cin >> n;
    s = 2 * n - 1;
    tmp = n;

    for (int i = 1; i <= n; ++i)
    {
        int p = 1, q = 1;
        for (int m = 1; m < i; ++m)
            cout << ".";

        for (int j = 1; j <= s; ++j)
        {
            if (q)
                cout << p, p++;
            else
                cout << p, p--;

            if (p == tmp)
                q = 0;
        }
        for (int k = 1; k < i; ++k)
            cout << ".";

        s -= 2, tmp--;
        cout << "\n";
    }
    return 0;
}