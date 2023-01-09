#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;//防止乘法之后报INT错

const int N = 500010;

int n;
char str[N];
int l[N], r[N]; // 表示当前位置左边或者右边不同与当前字母的数量

int main()
{
    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0, h = 0, g = 0; i < n; i++)
        // 如果当前位i存'G',则l[i]表示当前位左边存'H'的数量
        // 当前位置存的是'G',则连续'H'的数量就被清空，'G'的数量增加一个
        if (str[i] == 'G')
            l[i] = h, h = 0, g++;
        else
            l[i] = g, g = 0, h++;

    for (int i = n - 1, h = 0, g = 0; i >= 0; i--)
        if (str[i] == 'G')
            r[i] = h, h = 0, g++;
        else
            r[i] = g, g = 0, h++;

    LL res = 0;
    for (int i = 0; i < n; i++)
        res += (LL)l[i] * r[i] + max(l[i] - 1, 0) + max(r[i] - 1, 0);
    printf("%lld\n", res);
    return 0;
}