#include <iostream>
using namespace std;

//定义图的邻接矩阵存储结构
#define MaxNum 100 //定义最大顶点数
typedef int VertexType;
typedef int EdgeType;
typedef struct //图的邻接矩阵结构体
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
