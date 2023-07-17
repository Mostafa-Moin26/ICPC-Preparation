// 1 * n + 2 * (n - 1) + . . . . n * 1
// find the total sum of this series

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, j = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i)
        sum = sum + (i * (n - j)), j++;

    cout << sum;

    return 0;
}