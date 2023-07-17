// 1^1 + 2^2 + 3^3 + . . . + n^n
// Find total sum of this series

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i)
        sum += pow(i, i);

    cout << sum;

    return 0;
}