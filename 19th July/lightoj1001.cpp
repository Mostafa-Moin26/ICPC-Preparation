#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        (n >= 10) ? cout << "10 " << n - 10 << endl : cout << "0 " << n << endl;
    }
    return 0;
}