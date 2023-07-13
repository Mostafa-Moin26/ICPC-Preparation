// Given 3 sides of a triangle, now find the all angles of that triangle

#include <bits/stdc++.h>
#define pi 3.1416

using namespace std;

double calculateAngle(double a, double b, double c)
{

    return acos((a * a + b * b - c * c) / (2 * a * b));
}

int main()
{
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    double angle1 = calculateAngle(b, c, a);
    double angle2 = calculateAngle(a, c, b);
    double angle3 = calculateAngle(a, b, c);

    angle1 = angle1 * (180/pi);
    angle2 = angle2 * (180/pi);
    angle3 = angle3 * (180/pi);

    cout << "The angles of the triangle are: " << angle1 << " degrees, " << angle2 << " degrees, " << angle3 << " degrees." << endl;

    return 0;
}
