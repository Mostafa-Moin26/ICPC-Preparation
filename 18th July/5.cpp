// given x and n, find cosx using maclaurin series

#include <bits/stdc++.h>

using namespace std;

double Factorial(double n)
{
    if (n <= 1)
        return 1;

    return n * Factorial(n - 1);
}

int main()
{
    double x, n, cos_x = 1;
    int j = 2;
    cin >> x >> n;

    for (int i = 2; i <= n; i++)
    {
        if (i & 1)
            cos_x = cos_x + (pow(x, j) / Factorial(j));

        else
            cos_x = cos_x - (pow(x, j) / Factorial(j));

        j+=2;
    }

    cout << cos_x;

    return 0;
}