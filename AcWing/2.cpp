/*
给定学生的成绩单，成绩单中包含每个学生的学号和分数，请将成绩单按成绩从低到高的顺序重新排序。
如果学生的成绩相同，则按照学号从小到大的顺序进行排序。
*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int n;
struct Person
{
    /* data */
    int id;
    int score;

    bool operator<(const Person &t) const
    {
        /* 双关键字排序，第一个关键字score，第二个关键字id */
        if (this->score != t.score)
            return this->score < t.score;
        else
            return this->id < t.id;
    }
} q[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> q[i].id >> q[i].score;

    sort(q, q + n);

    cout << "--------" << endl;
    for (int i = 0; i < n; ++i)
        cout << q[i].id << " " << q[i].score << endl;
    return 0;
}
