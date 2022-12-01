/* 1998-程序设计-2
(1)已知带头结点的单链表L中的结点值是按值非递减有序排列的，试将值为x的结点插入表L中，使得L仍然有序；
(2)试设计一算法，逆置带头结点的单链表head。
*/

#include <iostream>
using namespace std;

#define ElemType int //假设ElemType为int
//结点定义
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode;

//第一问解如下
void Insert(LNode *&L, ElemType x)
{
    LNode *p = L;
    while (p->next) //下面这些步骤，画个图就理解出来了
    {
        if (p->next->data < x)
        {
            p = p->next;
        }
        else
        {
            LNode *q;
            q = (LNode *)malloc(sizeof(LNode));
            q->data = x;
            q->next = p->next;
            p->next = q;
            return;
        }
    }
    // 下面两行，当p遍历到结尾时才插入x的情况
    p->next->data = x;
    p->next->next = NULL;
}

// 第二问解如下
void Reverse(LNode *&L)
{
    LNode *p = L->next, *q;
    L->next = NULL; //将源单链表的头结点与后面的结点断开
    while (p)
    {
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
}