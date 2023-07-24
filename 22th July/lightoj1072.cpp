#include <bits/stdc++.h>
#define pi acos(-1.0)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    double R, r, n;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        cin >> R >> n;

        double angle = pi / n;
        r = (R * sin(angle)) / (1 + sin(angle));

        printf("Case %d: %.10lf\n", i, r);
    }

    return 0;
}