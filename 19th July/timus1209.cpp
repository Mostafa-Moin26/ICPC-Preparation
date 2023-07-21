#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, k, n;
    cin >> t;

    while (t--)
    {
        cin >> k;

        n = (-1 + sqrt(double(8 * k - 7))) / 2.0;

        if (k == n * (n + 1) / 2 + 1)
            cout << "1 ";
        else
            cout << "0 ";
    }
    return 0;
}