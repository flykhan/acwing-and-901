/* 1997-四、程序设计题
把从键盘输入的一字符串存入一字符型数组中，然后调用字符串逆转函数把该数组中的字符串存放顺序逆转，并显示数组中逆转后的字符串。
(1)要求字符串逆转函数设计为递归函数；
(2)程序中只能使用一个字符型数组。
例如:输入到字符型数组中的时ABCDE,程序执行后，该数组中的字符串变为EDCBA
 */
#include <iostream>
#include <cstring> //strlen
#include <string>
using namespace std;

int reverse(char *s, int n)
{
    if (n == 0 || n == 1)
        return 0;
    char temp = s[0];
    s[0] = s[n - 1];
    s[n - 1] = temp;

    return reverse(s + 1, n - 2);
}

int main()
{
    char s[100];
    cin >> s;
    reverse(s, strlen(s));
    cout << s << endl;

    return 0;
}