/* 按分数稳定排序 */

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int n, m;
struct Person
{
    /* data */
    string name;
    int score;

    /* 重载两个运算符<和>，大于号和小于号 */
    bool operator<(const Person &t) const
    {
        return score < t.score;
    }
    bool operator>(const Person &t) const
    {
        return score > t.score;
    }

} q[N];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> q[i].name >> q[i].score;

    if (!m)
        stable_sort(q, q + n, greater<Person>()); // stable_sort是稳定排序，第三个参数greater是从大到小排序
    else
        stable_sort(q, q + n);

    cout << "-----------" << endl;

    for (int i = 0; i < n; i++)
        cout << q[i].name << ' ' << q[i].score << endl;
    return 0;
}
