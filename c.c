/**
 * @Author: 吴昀泽
 * @Date:   2018-Mar-14
 * @Last modified by:
 * @Last modified time: 2018-04-06T14:46:26+08:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
struct name
{
    double jiaodu[1000]; //2 - 1023
    double bianma[1000]; //-10000 - 10000
    double tuoluo[1000]; //-3600 - 3600
};
void suiji()
{
    struct name name1;
    int n = 0;
    srand(time(NULL));
    system("pause");
    while (n <= 1000)
    {
        name1.jiaodu[n] = rand() % 1022 + 2;
        name1.bianma[n] = rand() % 20001 - 10000;
        name1.tuoluo[n] = rand() % 7201 - 3600;
        printf("第%d次:角度传感器\t编码器\t\t陀螺仪\n", n);
        printf("\t%lf\t%lf\t%lf\n", name1.jiaodu[n], name1.bianma[n], name1.tuoluo[n]);
        Sleep(5);
        n++;
    }
}
int main()
{
    suiji();
    return 0;
}
