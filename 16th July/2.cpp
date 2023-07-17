// 1 + (2 + 3) + (4 + 5 + 6) + . . . + nth term
// find the total sum of this series

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, j = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int k = 1; k <= i; ++k)
            sum += j, j++;

    cout << sum;
    
    return 0;
}