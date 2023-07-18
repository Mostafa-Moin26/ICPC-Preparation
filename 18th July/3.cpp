// find n! (factorial)

#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll Factorial(ll n)
{
    if (n <= 1)
        return 1;

    return n * Factorial(n - 1);
}
int main()
{
    ll n;
    cin >> n;

    cout <<Factorial(n);
    return 0;
}