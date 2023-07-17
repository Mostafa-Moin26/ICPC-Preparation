// given a co-ordinate, now print the quadrant

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "1st quadrant";
    else if (x < 0 && y > 0)
        cout << "2nd quadrant";
    else if (x < 0 && y < 0)
        cout << "3rd quadrant";
    else
        cout << "4th quadrant";

    return 0;
}