#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, i = 1;
    cin >> T;

    ll w, odd, even;

    while (T--)
    {
        cin >> w;

        if (w % 2 != 0)
        {
            cout << "Case " << i++ << ": Impossible\n";
            continue;
        }

        odd = w / 2;
        even = 2;

        while (odd % 2 == 0)
        {
            odd /= 2;
            even *= 2;
        }

        cout << "Case " << i++ << ": " << odd << " " << even << endl;
    }

    return 0;
}