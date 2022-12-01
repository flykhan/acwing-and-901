/* 1998-程序设计-1
(1)每次使用下列两个公式之一，试逐一地递增地产生并输出所产生的前K个(K已知)正整数值的序列：
M=2N+1……(1 )
M=3N+1……(2)
其中N=0,1,2,3……
例如：K=7,前7个值得序列为：1 3 4 5 7 9 10
注意：不准使用数组或集合；不准先产生足够多后再排序或挑选。
*/

#include <iostream>
using namespace std;

int main()
{
    int K, i, j, count = 0;
    cin >> K;
    for (i = 0, j = 0;;)
    {
        if ((2 * i + 1) < (3 * j + 1))
        {
            cout << 2 * i + 1 << " ";
            count++;
            i++;
        }
        else if ((2 * i + 1) == (3 * j + 1))
        {
            cout << 2 * i + 1 << " ";
            count++;
            i++;
            j++;
        }
        else
        {
            cout << 3 * j + 1 << " ";
            count++;
            j++;
        }
        if (count == K)
            break;
    }
}