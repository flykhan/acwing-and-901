/* 1998-数据结构试题-(五)(10分)编写程序：已知图的邻接矩阵，建立该图的邻接表。 */
#include <iostream>
using namespace std;

//定义图的邻接矩阵存储结构
#define MaxNum 100 //定义最大顶点数
typedef int VertexType;
typedef int EdgeType;
typedef struct
{
    VertexType vex[MaxNum];        // vertex list，存放结点信息
    EdgeType edge[MaxNum][MaxNum]; // edge list，存放边的信息
    int vexnum;                    // vertex，顶点数
    int edgenum;                   // edge num，边数
} MGraph;

//定义图的邻接表存储结构
/* 这两行上面已经定义过了，因此注释
#define MaxNum 100//定义最大顶点数
typedef int VertexType;
*/
typedef struct ArcNode //边表
{
    int info;             // info，此边的信息（例如边的权值）
    int adjvex;           // vertex location，该边所指向结点的位置
    struct ArcNode *next; // next vertex，指向下一条边的指针
} ArcNode;
typedef struct VNode //顶点表
{
    VertexType data; // vertex data，顶点信息
    ArcNode *first;  // pointer to the first adj vertex，指向第一条边的指针
} VNode;
typedef struct //图的邻接表结构体
{
    VNode adjlist[MaxNum]; //结点的邻接表
    int vexnum;            //顶点数
    int edgenum;           //边数
} ALGraph;

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