#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, ur_pos, lift_pos, i = 1;
    cin >> T;

    while (T--)
    {
        cin >> ur_pos >> lift_pos;

        if (ur_pos <= lift_pos)
            cout << "Case " << i++ << ": " << lift_pos * 4 + 19 << endl;
        else
            cout << "Case " << i++ << ": " << (ur_pos - lift_pos + ur_pos) * 4 + 19 << endl;
    }
    
    return 0;
}