/* 2001-数据结构-五
已知某有向图（n个结点）的邻接表，求该图各结点的入度数
 */

#include "GraphDefine.h"
#include <iostream>
using namespace std;

int count(ALGraph g, int k)
{
    ArcNode *p;
    int i, sum = 0;
    for (i = 1; i < g.vexnum; i++)
    {
        p = g.adjlist[i].first;
        while (p)
        {
            if (p->adjvex == k)
            {
                sum++;
                break;
            }
            p = p->next;
        }
    }
    return sum;
}

int main()
{
    ALGraph g;
    int i;
    for (i = 1; i < g.vexnum; i++)
    {
        cout << count(g, i) << " ";
    }
}