/* 1998-数据结构试题-(五)(10分)编写程序：已知图的邻接矩阵，建立该图的邻接表。 */
#include <iostream>
#include "GraphDefine.h"
using namespace std;

//本题目解答部分如下
void MatrixToList(MGraph g, ALGraph *&G)
{
    int i, j, n = g.vexnum;
    ArcNode *p;
    G = (ALGraph *)malloc(sizeof(ALGraph));
    for (i = 0; i < n; i++) //给邻接表中所有头结点的指针域置初值
        G->adjlist[i].first = NULL;
    for (i = 0; i < n; i++) //检查邻接矩阵中每个元素
        for (j = n - 1; j >= 0; j--)
            if (g.edge[i][j] != 0) //邻接矩阵的当前元素不为0
            {
                p = (ArcNode *)malloc(sizeof(ArcNode));
                p->adjvex = j;
                p->info = g.edge[i][j];
                p->next = G->adjlist[i].first;
                G->adjlist[i].first = p;
            }
    G->vexnum = n;
    G->edgenum = g.edgenum;
}