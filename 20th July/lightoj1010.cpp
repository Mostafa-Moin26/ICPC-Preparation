#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, m, n, i = 1, ans, a;
    cin >> t;

    while (t--)
    {
        cin >> m >> n;

        if (m == 1 || n == 1)
            ans = m * n;
        else if (m == 2 || n == 2)
        {
            if (m == 2)
                a = n;
            else
                a = m;

            if (a % 4 == 1)
                ans = a + 1;
            else if (a % 4 == 2)
                ans = a + 2;
            else if (a % 4 == 3)
                ans = a + 1;
            else if (a % 4 == 0)
                ans = a;
        }
        else
            ans = ceil(m * n / 2.0);

        cout << "Case " << i++ << ": " << ans << endl;
    }
    return 0;
}