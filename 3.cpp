/**
 * @Date:   2018-04-20T20:06:31+08:00
 * @Last modified time: 2018-04-23T17:03:00+08:00
 */
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x, n;
    while (1)
    {
        cin >> x >> n;
        if (x == 0 && n == 0)
        {
            cout << "qusi" << endl;
            break;
        }
        else
        {
            if ((x < 0 && n <= 0) || (x < 0 && 1 / n != int(1 / n)))
            {
                cout << "gun" << endl;
                continue;
            }
            cout << x << '\t' << n << '\t' << pow(x, 1.0 / n) << endl;
        }
    }
    return 0;
}
