#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int a, b, c, d, s, x, y;
    cout << "Enter the terms of Quadrtic equation in the form of ax^2+bx+c\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    d = pow(b, 2) - 4 * a * c;
    x = -b + pow(d, 1 / 2);
    y = -b - pow(d, 1 / 2);
    cout << "The roots of the given equation is: " << x << " and " << y;
}