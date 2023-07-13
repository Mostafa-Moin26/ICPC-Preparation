// Given the coordinates of the vertices of a triangle, find the area

#include <bits/stdc++.h>

using namespace std;

double CalculateArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double A = (x1 * y2 + x2 * y3 + x3 * y1);
    double B = (y1 * x2 + y2 * x3 + y3 * x1);
    double area = abs(A - B) / 2.0;

    return area;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first vertex (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second vertex (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of the third vertex (x3, y3): ";
    cin >> x3 >> y3;

    double area = CalculateArea(x1, y1, x2, y2, x3, y3);

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
