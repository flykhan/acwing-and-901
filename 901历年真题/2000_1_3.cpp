/* 2000-简答题-1.3
试写出二分查找算法
*/
#include <iostream>
using namespace std;
#define ElemType int

int binarySearch(ElemType srcArray[], int des)
{

    //第一个位置
    int low = 0;
    //最高位置（数组长度-1，因为下标从0开始）
    int high = (sizeof(srcArray) / sizeof(srcArray[0])) - 1;
    //当low“指针”和high不重复的时候
    while (low < high)
    {
        //中间位置计算：low+最高位置减去最低位置，右移一位，相当于除2，也可以写作(high+low)/2
        int middle = low + ((high - low) >> 1);
        //与最中间的数字进行判断，是否相等，相等的话就返回对应的数组下标
        if (des = srcArray[middle])
        {
            return middle;
        }
        else if (des < srcArray[middle])
        {
            high = middle - 1;
        }
        else
            low = middle + 1;
    }
    return -1; //-1表示不存在此元素
}