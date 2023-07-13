// Given the lengths of three sides of a triangle, determine its area

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, s, area;

    cin >> a >> b >> c;

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << area;

    return 0;
}