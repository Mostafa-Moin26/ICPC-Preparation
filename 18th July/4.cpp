// given n and r, find (n/r) = n!/r!(n-r)!

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
    double n, r;
    cin >> n >> r;

    cout << (Factorial(n)) / (Factorial(r) * Factorial(n - r));

    return 0;
}