/* 2001-数据结构-四
已知双向链表，请写出删除S指向的结点的子程序。
*/

#include <iostream>
using namespace std;

typedef struct DLNode
{
    int data;
    struct DLNode *pre;
    struct DLNode *nex;
} DLNode;

int DelNode(DLNode *DT, DLNode *s)
{
    DLNode *p = s->pre;
    p->nex = s->nex;
    s->nex->pre = p;
    free(s);
}