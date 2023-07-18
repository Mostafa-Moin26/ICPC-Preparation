// print nth palindrome where n < 10^9

#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPalindrome(ll rev, ll n, ll tmp)
{
    if (n == 0)
    {
        if (rev == tmp)
            return true;

        return false;
    }

    return isPalindrome(rev * 10 + n % 10, n / 10, tmp);
}

ll FindNthPalindrome(ll n)
{
    ll counter = 1;
    ll number = 1;

    while (counter <= n)
    {
        if (isPalindrome(0, number, number))
            counter++;

        number++;
    }

    return --number;
}
int main()
{
    ll n;
    cin >> n;

    cout << FindNthPalindrome(n);

    return 0;
}