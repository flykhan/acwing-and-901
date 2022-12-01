/* 1998-程序设计-1
(2)每次使用下列两个公式之一，试逐一地递增地产生并输出所产生的前K个(K已知)正整数值的序
列：
M=aN+1……(1 )
M=bN+1……(2)
a,b为已知正整数，N=0,1,2,3……
*/

#include <iostream>
using namespace std;

int main()
{
    int K, a, b, i, j, count = 0;
    cin >> K >> a >> b;
    for (i = 0, j = 0;;)
    {
        if ((a * i + 1) < (b * j + 1))
        {
            cout << a * i + 1 << " ";
            count++;
            i++;
        }
        else if ((a * i + 1) == (b * j + 1))
        {
            cout << a * i + 1 << " ";
            count++;
            i++;
            j++;
        }
        else
        {
            cout << b * j + 1 << " ";
            count++;
            j++;
        }
        if (count == K)
            break;
    }
}