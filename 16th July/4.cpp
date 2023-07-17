// 1 + (2 + 3 * 4) + (5 + 6 * 7  + 8 * 9 *10) + . . . + nth term
// find the total sum

#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll n, sum = 0, j = 1, sum1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += j, j++;
        for (int a = 1; a < i; ++a)
        {
            sum1 = 1;

            for (int b = 1; b <= a+1; ++b)
                sum1 *= j, j++;

            sum += sum1;
        }
    }
    cout << sum;
    return 0;
}