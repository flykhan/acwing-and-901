/* 2000-设计题-2.2
设计判断两棵二叉树是否等价的算法
所谓二叉树T1和T2等价，如果T1和T2都是空的二叉树，或者T1和T2都只有一个根节点，或者T1的
左子树和T2的左子树是等价的且T1的右子树和T2的右子树是等价的。
*/

#include <iostream>
using namespace std;

typedef struct BTNode // 二叉树定义
{
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
} BTNode;

int similar(BTNode *T1, BTNode *T2) // 传参T1，T2
{
    int lefts, rights;
    // 如果T1和T2都为空，则返回1，即为T1与T2相等
    if (T1 == NULL && T2 == NULL)
        return 1;
    // 如果T1为空而T2还不为空，或者T1不为空而T2已为空，则返回0，表示T1与T2不相等
    else if (T1 == NULL && T2 != NULL || T1 != NULL && T2 == NULL)
        return 0;
    else
    {
        // 利用递归方法来判断T1与T2的左右子树是否相等
        lefts = similar(T1->lchild, T2->lchild);
        rights = similar(T1->rchild, T2->rchild);
        return lefts && rights; // 如果左右子树返回值都为1，则结果为1，表示T1与T2相等。否则返回0，表示T1、T2不相等
    }
}