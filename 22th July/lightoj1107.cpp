#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, x1, x2, y1, y2, M, x, y, i = 1;

    cin >> T;

    while (T--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> M;

        cout << "Case " << i++ << ":\n";
        while (M--)
        {
            cin >> x >> y;

            if ((x >= x1 && y >= y1) && (x <= x2 && y <= y2))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}