/* 1998-设计题-6
(六)
完全数的定义可如下描述：
如果正整数M等于它的全部因子（不包括M自身）之和，则M叫做完全数。例如：6=1+2+3；
28=1+2+4+7+14；本例中，6和28均是完全数。
试求1000以内的全部完全数并输出。
*/

#include <iostream>
using namespace std;

int PerNum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i; //如果是因子则加到sum中
    if (sum == n)
        cout << n << " ";
}

int main()
{
    int i;
    for (i = 1; i <= 1000; i++)
    {
        PerNum(i);
    }
}