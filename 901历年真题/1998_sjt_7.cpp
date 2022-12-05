/* 1998-设计题-7
用递归方法，求已知二叉树叶节点个数。
 */
#define ElemType int

#include <iostream>
using namespace std;

typedef struct BTNode //二叉树结点存储结构定义
{
    ElemType data;
    struct BTNode *lchild;
    struct BTNode *rchild;
} BTNode;

int n;
void count(BTNode *p)
{
    if (p)
    {
        if (p->lchild == NULL && p->rchild == NULL)
            n++;
        count(p->lchild);
        count(p->rchild);
    }
}