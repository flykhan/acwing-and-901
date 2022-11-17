/*
特殊的完全平方数：在3位整数100-999中查找符合如下条件的整数并输出：
这个数既是完全平方数，又有两位数字相同。如121（11的平方）、144（12的平方）
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j = 10; // j用来做平方因子，取10为初始值是因为10*10=100正好为i的初始范围值
    int hun, ten, data;

    for (i = 100; i <= 999; ++i)
    {
        // j = 10; //将这一句放到for前面作为j的全局定义，避免了每次的j的从10重置
        while (j * j <= i)
        {
            if (i == j * j) //如果当前的i值为完全平方数，则判断是否有两位数字相同
            {
                hun = i / 100; //算出百位数字
                data = i - hun * 100;
                ten = data / 10;        //算出十位数字
                data = data - ten * 10; //算出个位数字

                if (hun == ten || hun == data || ten == data) //判断是否有两位数字相同
                    cout << i << endl;                        //如果符合题目条件，则打印输入当前i值
            }
            ++j;
        }
    }
}