/* 按分数稳定排序，
使用sort来排序的写法 */

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
    int id;

    bool operator<(const Person &t) const
    {
        if (score != t.score)
            return score < t.score; //当分数不同时，分数小的在前面
        else
            return id < t.id; //分数相同时，id小的在前面
    }
    bool operator>(const Person &t) const
    {
        if (score != t.score)
            return score > t.score; //当分数不同时，分数大的在前面
        else
            return id < t.id; //分数相同时，id小的在前面
    }
} q[N];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> q[i].name >> q[i].score;
        q[i].id = i; //给第i行设置行号id，id大小等于此时的i
    }

    // 当m非零，即输入m为1时，采用if条件内容
    if (!m)
        sort(q, q + n, greater<Person>());
    else
        sort(q, q + n);

    cout << "----------" << endl;
    for (int i = 0; i < n; i++)
        cout << q[i].name << " " << q[i].score << endl;
    return 0;
}