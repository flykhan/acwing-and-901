/*
 *   设计一个算法，求不带权无向连通图G中距顶点v的最远的顶点
 */

#include "iostream"
#include "queue"
using namespace std;

/*****定义邻接表存储的图*****/
#define MaxNum 100 //最大顶点数
typedef int VertexType;

typedef struct ArcNode //边表
{
    int adjvex;           //该边所指向结点的位置
    struct ArcNode *next; //指向下一条边的指针
} ArcNode;

typedef struct VNode //顶点表
{
    VertexType data;      //顶点信息
    ArcNode *first;       //指向第一条边的指针
} VNode, AdjList[MaxNum]; //邻接表

typedef struct
{
    AdjList vertices;    //邻接表
    int vexnum, edgenum; //顶点数和边数
// } ALGraph;//（当main函数定义了确定的图时，用这一行替换下一行）
} AGraph;
/*****定义邻接表存储的图结束*****/

/*****定义BFS算法*****/
int BFS(AGraph *G, int v)
{
    ArcNode *p;      //定义边表
    AdjList adjList; //定义邻接表
    queue<int> q;
    // int visit[G->vexnum] = {0}, w; //（当main函数定义了确定的图时，用这一行替换下一行）
    int visit[9] = {0}, w;

    //将顶点v入队并标注已访问
    q.push(v);
    visit[v] = 1;

    //使用广度优先策略遍历邻接点
    while (!q.empty())
    {
        w = q.front();//当前循环轮次距v最远的顶点
        q.pop();
        p = adjList[w].first;

        while (p)
        {
            if (visit[p->adjvex] == 0) //如果当前指针位置的顶点没有访问，则访问它
            {
                q.push(p->adjvex);
                visit[p->adjvex] = 1;
            }
            p = p->next; //将弧边p指向p的下一个指针位置
        }//当弧边p没有下一个位置时，结束循环
    }//当队列q为空时，结束循环
    return w;
}