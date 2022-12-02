/* 2000 - 设计题 - 2.1
请写出在已知的双向链表中删除某指定结点的算法并用C编程。(7分)
假设结点的各域分别为ff、data、rr,如图外示
 */
#include <iostream>
using namespace std;

typedef struct DLNode
{
    int data;
    struct DLNode *ff, *rr;
} DLNode;

DLNode *search(DLNode *&C, int x)
{
    DLNode *p = C->rr;
    while (p)
    {
        if (p->data == x)
            break;
        p = p->rr;
    }
    return p;
}

void del(DLNode *p)
{
    if (p == NULL)
        return;
    p->ff->rr = p->rr;
    p->rr->ff = p->ff;
    free(p);
}

int main()
{
    int x;
    cin >> x;
    DLNode *C;                //假设的已有双链表为C
    DLNode *p = search(C, x); //在C中查找输入值x
    del(p);                   //删除上一步找到的p
}