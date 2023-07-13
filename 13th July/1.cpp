// Find the distance of 2 points in 2 dimensional space.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << "The distance between two points is ";
    cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return 0;
}