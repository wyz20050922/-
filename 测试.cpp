/**
 * @Author: 吴昀泽
 * @Date:   2018-04-27T15:48:51+08:00
 * @Email:  15067000960@163.com
 * @Last modified by:   吴昀泽
 * @Last modified time: 2018-10-02T15:20:06+08:00
 */
#include <iostream>
using namespace std;
class CANMOO
{
  private:
    int _price;

  public:
    CANMOO();
    CANMOO(int a);
    CANMOO(int a, int b);
    CANMOO(const CANMOO &a);
    ~CANMOO();
    void price();
    friend void fun(CANMOO &a);
};
int main(int argc, char *argv[])
{
    CANMOO chicken;
    CANMOO sheep(chicken);
    CANMOO bird(30, 25);
    // int a;
    // while (1)
    // {
    //     cin >> a;
    //     switch (a)
    //     {
    //         case 1:
    //             cout << "chicken:";
    //             chicken.price();
    //             break;
    //         case 2:
    //             cout << "sheep:";
    //             sheep.price();
    //             break;
    //         case 3:
    //             cout << "bird:";
    //             bird.price();
    //             break;
    //         default:
    //             cout << "没有此动物" << endl;
    //             system("cls");
    //             break;
    //     }
    // }
    return 0;
}
void fun(CANMOO &a)
{
    a._price = 3333;
    return;
}
CANMOO::CANMOO(const CANMOO &a)
{
    _price = a._price;
}
CANMOO::CANMOO()
{
    cout << "chicken" << endl;
}
CANMOO::CANMOO(int a, int b)
{
    cout << "bear " << endl;
}
CANMOO::CANMOO(int a)
{
    _price = a;
    cout << "sheep" << endl;
}
CANMOO::~CANMOO()
{
}
void CANMOO::price()
{
    cout << _price << "万" << endl;
}
// int main()
// {
//     int j;
//     int k;
//     int sum;
//     for (j = 2; j <= 1000; j++)
//     {
//         sum = 0;
//         for (k = 1; k < j; k++)
//         {
//             if (j % k == 0)
//                 sum += k;
//         }
//         if (sum == j)
//             cout << j << endl;
//     }
//     return 0;
// }
