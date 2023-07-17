// print increasing order (3 numbers)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (a > c)
    {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (b > c)
    {
        int tmp = c;
        c = b;
        b = tmp;
    }

    cout << a << " " << b << " " << c;
    return 0;
}