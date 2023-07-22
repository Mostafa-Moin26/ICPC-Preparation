#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b, c, i = 1;
    vector<int> vect(3);

    cin >> T;

    while (T--)
    {
        cin >> a >> b >> c;

        vect[0] = a;
        vect[1] = b;
        vect[2] = c;

        sort(vect.begin(), vect.end());

        if (pow(vect[2], 2) == (pow(vect[0], 2) + pow(vect[1], 2)))
            cout << "Case " << i++ << ": yes\n";
        else
            cout << "Case " << i++ << ": no\n";
    }
    return 0;
}