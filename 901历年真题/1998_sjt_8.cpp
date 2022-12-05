/* 1998-设计题-8
在已知链表中按内容查找某元，若找到则删除之，否则输出失败信息
 */
#include <iostream>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;

void findAndDelete(LNode *&L, int x)
{
    //自己写的部分
    /*     while (L)
        {
            LNode *p = L;
            if (L->next->data == x)
            {
                L->next = L->next->next;
                free(p->next);
            }
            else
            {
                cout << "can't find x in L" << endl;
            }
        } */

    //参考答案如下
    LNode *p, *q;
    p = L;
    while (p->next)
    {
        //寻找查找结点的前驱
        if (p->next->data == x)
            break;
        p = p->next;
    }
    if (p->next == NULL)
        cout << "cannot search!";
    else
    {
        //删除操作
        q = p->next;
        p->next = p->next->next;
        free(q);
    }
}