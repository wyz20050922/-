/**
 * @Date:   2018-04-23T16:13:29+08:00
 * @Last modified time: 2018-04-23T16:20:38+08:00
 */
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    double delta;
    double x, x1, x2;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
            cout << "滚!!" << endl;
        else
        {
            x = -c / b;
            cout << x << endl;
        }
    }
    else
    {
        delta = b * b - 4.0 * a * c;
        if (delta >= 0)
        {
            delta = sqrt(delta);
            x1 = (-b + delta) / 2.0 / a;
            x2 = (-b - delta) / 2.0 / a;
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else
        {
            delta = sqrt(-delta);
            x1 = -b / 2.0 / a;
            x2 = delta / 2.0 / a;
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
    return 0;
}
