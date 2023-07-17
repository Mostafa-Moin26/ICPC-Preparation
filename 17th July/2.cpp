/*
     The pattern

       ***
       .**
       ..*
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < s; ++j)
            cout << ".";
        for (int k = i; k <= n; ++k)
            cout << "*";

        cout << "\n";
        s++;
    }
    
    return 0;
}