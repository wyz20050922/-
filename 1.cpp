/**
 * @Author: 吴昀泽
 * @Date:   2018-Mar-17
 * @Last modified by:
 * @Last modified time: 2018-04-20T16:23:46+08:00
 */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char c,ec;
    int k;
    cin >> c >> k;
    ec = ((c - 'A') + k) % 26 + 'A';
    cout << ec << endl;
    return 0;
}
