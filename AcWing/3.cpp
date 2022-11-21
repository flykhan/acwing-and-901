/* 将一个长度最多为 30 位数字的十进制非负整数转换为二进制数输出。 */

/* 30位需要用到高精度，高精度数组倒着存，可以避免数组整体后移动 */
#include <iostream>
#include <cstring>
#include <string> // std::string, std::to_string
#include <algorithm>
#include <vector>

using namespace std;

vector<int> div(vector<int> A, int b)
{
    vector<int> C; //定义返回结果
    /* 从最高位开始（最高位是最后一位），余数是零 */
    for (int i = A.size() - 1, r = 0; i >= 0; i--)
    {
        r = r * 10 + A[i];  //余数乘以十，加上当前这一位
        C.push_back(r / b); //商
        r %= b;             //下一位的余数
    }
    reverse(C.begin(), C.end());
    while (C.size() && C.back() == 0)
        C.pop_back();
    return C;
}

int main()
{
    string s;
    while (cin >> s) //只要读入到输入，就将当前输入行十进制数字的二进制运算结果输出
    {
        vector<int> A;
        for (int i = 0; i < s.size(); i++)
            /* -'0'用于将文本转换为数字。A存的时候倒着存。-i-1是先枚举最后一个数，再枚举倒数第二个数，以此类推 */
            A.push_back(s[s.size() - i - 1] - '0');

        string res;   //结果字符串（最终输出的答案）
        if (s == "0") //如果字符串是0，则答案也是0
            res = "0";
        else
        {
            while (A.size()) //当A.size()不为零是，执行while体
            {
                res += to_string(A[0] % 2); //每次都是A的个位模2，获得余数
                A = div(A, 2);              //每次A应该处以2
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}