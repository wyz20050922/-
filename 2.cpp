/**
 * @Date:   2018-04-20T16:28:25+08:00
 * @Last modified time: 2018-04-20T20:05:38+08:00
 */
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << j * i << " ";
        }
        cout << "\n";
    }
    return 0;
}
