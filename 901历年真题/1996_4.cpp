/* 1996——4
如果用链表作为栈的存储结构，请写出相应的运算过程。
(1)初始化   (2)进栈     (3)退栈
 */

#include <iostream>

//链栈的结点定义
typedef struct LNode
{
    int data; //假设数据类型为整型变量
    struct LNode *next;
} LNode;

//初始化
void InitStack(LNode *&L) // L要发生变化，所以用引用型&
{
    L = (LNode *)malloc(sizeof(LNode)); //头结点
    L->next = NULL;
}

//进栈
void push(LNode *&L, int x)
{
    LNode *p;
    p = (LNode *)malloc(sizeof(LNode));
    p->next = NULL;
    //头插法
    p->data = x;
    p->next = L->next;
    L->next = p;
}

//退栈
int pop(LNode *&L, int &x)
{
    LNode *p;
    if (L->next == NULL)
        return 0; //出栈判空
    p = L->next;
    x = p->data;
    L->next = p->next;
    free(p); //释放存储空间
    return 1;
}