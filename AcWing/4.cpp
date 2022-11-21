/*  进制转换
    将 M 进制的数 X转换为 N 进制的数输出。
 */

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;
    vector<int> A;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[s.size() - 1 - i];
        if (c >= 'A')
            A.push_back(c - 'A' + 10);
        else
            A.push_back(c - '0');
    }

    string res; //定义结果字符串
    if (s == "0")
        res = "0"; //当输入0时，输出结果字符串也是0
    else
    {
        while (A.size())
        {
            int r = 0; //定义余数
            for (int i = A.size() - 1; i >= 0; i--)
            {
                A[i] += r * a;
                r = A[i] % b; //新余数
                A[i] /= b;    //商
            }
            // A.size()表示A大于零;A.back()==0表示A的当前最高位为0——应该舍去，故使用A.pop_back()
            while (A.size() && A.back() == 0)
                A.pop_back();
            if (r < 10)
                res += to_string(r);
            else
                res += r - 10 + 'a';
        }
        reverse(res.begin(), res.end()); //逆转结果字符串，因为A数组是倒着存的，所以要逆转才是转换后的结果
    }
    cout << res << endl; //打印结果
    return 0;
}
