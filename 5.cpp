/**
 * @Date:   2018-04-23T16:21:43+08:00
 * @Last modified time: 2018-04-23T16:44:37+08:00
 */
#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        double a, b, c;
        char d;
        cin >> a >> d >> b;
        if (d == '+')
        {
            c = a + b;
            cout << a << " + " << b << " = " << c << endl;
        }
        if (d == '-')
        {
            c = a - b;
            cout << a << " - " << b << " = " << c << endl;
        }
        if (d == '*')
        {
            c = a * b;
            cout << a << " * " << b << " = " << c << endl;
        }
        if (d == '/')
        {
            if (b == 0)
            {
                cout << "b = " << b << endl;
            }
            else
            {
                c = a / b;
                cout << a << " / " << b << " = " << c << endl;
            }
        }
        if (d != '+' && d != '-' && d != '*' && d != '/')
        {
            cout << "you go dei" << endl;
            break;
        }
    }
    return 0;
}
