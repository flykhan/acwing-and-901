/* 1998-设计题-9
使用递归和非递归两种方法分别求出第m项（m为正整数）的斐波那契数并输出，
注意：不得使用数组！
 */
#include <iostream>
using namespace std;

int Fib(int m) // 递归方式
{
    if (m == 1 || m == 2)
        return 0;
    else if (m == 3)
        return 1;
    return Fib(m - 1) + Fib(m - 2) + Fib(m - 3);
}

int Fib2(int m) // 非递归方式
{
    if (m == 1 || m == 2)
        return 0;
    else if (m == 3)
        return 1;
    int tmp1 = 0, tmp2 = 0, tmp3 = 1, tmp;
    for (int i = 4; i <= m; i++)
    {
        tmp = tmp1 + tmp2 + tmp3;
        tmp1 = tmp2;
        tmp2 = tmp3;
        tmp3 = tmp;
    }
    return tmp;
}
int main()
{
    cout << Fib(4) << endl;
    cout << Fib2(7) << endl;
}