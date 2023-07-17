// 1 - 2 + 3 - 4 + 5 . . . nth term
// Find the total sum of this series

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        (i & 1) ? sum += i : sum -= i;
    
    cout << sum;
    
    return 0;
}