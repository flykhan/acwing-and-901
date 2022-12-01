/* 1998-设计题-5
已知某图的邻接表，试建立该图的邻接矩阵。
 */

#include <iostream>
#include "GraphDefine.h"
#define M 100
#define N 100

void Convert(ALGraph *G, int arcs[M][N])
{
    for (int i = 0; i < G->vexnum; i++) //依次遍历各顶点表结点为头的边链表
    {
        ArcNode *p = (G->adjlist[i].first);
        while (p)
        {
            arcs[i][p->info] = 1;
            p = p->next;
        }
    }
}