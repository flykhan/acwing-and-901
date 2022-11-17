/*
 *   计算字符串中有多少个单词：输入一行字符，统计其中有多少单词。
 *   要求每个单词之间用空格分隔开，最后的字符不能为空格
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[100];
    int i, word = 1;
    char blank;
    // gets_s(str);
    cin.getline(str, 100);  // 接受输入一行字符

    if (str[0] == '\0') // 如果没有输入
        cout << "There is no words!";
    else if (str[0] == ' ') // 如果输入的第一个字符为空格
        cout << "There is just a blank!";
    else
    {
        for (i = 0; str[i] != '\0'; ++i) // 当未到达字符行尾部时，执行循环
        {
            blank = str[i];
            if (blank == ' ')
                ++word;
        }
        cout << "There are " << word << " words!" << endl;
    }

    return 0;
}