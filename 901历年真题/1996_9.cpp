/* 假定排序二叉树t的每个节点的存储结构如下图所示，其中Left为指向左子树的指针，Right为指向右
子树的指针。试编写一程序，完成从排序二叉树上删除键值为x（即Key=x，并假定值x在排序二叉树t上最
多只出现一次）的节点的功能。注意：删除后仍需保持排序二叉树的固有特性。
 */

#include <iostream>
#define KeyType int

//结点定义
typedef struct BSTNode
{
    KeyType key;
    struct BSTNode *Left, *Right;

} BSTNode;

//算法
BSTNode *DeleteBST(BSTNode *b, KeyType x)
{
    if (b)
    {
        if (b->key == x)
            b = DelNode(b);
        else
        {
            if (b->key > x)
                b->Left = DeleteBST(b->Left, x);
            else
                b->Right = DeleteBST(b->Right, x);
        }
    }
    return b;
}

//删除结点
BSTNode *DelNode(BSTNode *p)
{
    if (p->Left)
    {
        BSTNode *r = p->Left;    // r指向p结点左子树
        BSTNode *prer = p->Left; // prer指向p结点左子树
        while (r->Right != NULL) //搜索p结点左子树的最右边的叶子结点r
        {
            prer = r;
            r = r->Right;
        }
        p->key = r->key;
        if (prer != r) //若r不是p的左孩子，把r的左孩子作为r的父亲的右孩子
            prer->Right = r->Left;
        else
            p->Left = r->Left; //否则结点p的左子树指向r的左子树
        free(r);
        return p;
    }
    else
    {
        BSTNode *q = p->Right; // q指向p结点右子树
        free(p);
        return q;
    }
}