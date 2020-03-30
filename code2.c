/*
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

 */
#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    // 结果链表头指针
    struct ListNode *result = NULL;
    struct ListNode *newNode = NULL;
    struct ListNode *temp = NULL;
    int num = 0; // 和
    int nextNum = 0; // 进位

    num = l1->val + l2->val; // 两个数字的和
    newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = num%10;
    newNode->next = NULL;

    nextNum = num/10;   // 进位

    result = newNode;
    temp = newNode;

    l1 = l1->next;
    l2 = l2->next;


    while (l1 != NULL && l2 != NULL)
    {
        num = l1->val + l2->val + nextNum; // 两个数字的和加上进位
        newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = num%10;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;

        nextNum = num/10; // 进位
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1 != NULL)
    {
        num = l1->val + nextNum;
        newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = num%10;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;

        nextNum = num/10; // 进位
        l1 = l1->next;
    }
    
    while (l2 != NULL)
    {
        num = l2->val + nextNum;
        newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = num%10;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;

        nextNum = num/10; // 进位
        l2 = l2->next;
    }

    if (nextNum != 0) {
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = nextNum;
        newNode->next = NULL;
        temp->next = newNode;
    }

    return result;
    
}

int main(int argc, char const *argv[])
{
    struct ListNode *l11 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l11->val = 2;
    l11->next = NULL;
    struct ListNode *l12 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l12->val = 4;
    l12->next = NULL;
    l11->next = l12;
    struct ListNode *l13 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l13->val = 3;
    l13->next = NULL;
    l12->next = l13;
    struct ListNode *l21 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l21->val = 5;
    l21->next = NULL;
    struct ListNode *l22 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l22->val = 6;
    l22->next = NULL;
    l21->next = l22;
    struct ListNode *l23 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l23->val = 4;
    l23->next = NULL;
    l22->next = l23;
    
    struct ListNode *result = addTwoNumbers(l11, l21);
    while (result != NULL)
    {
        printf("%d\n", result->val);
        result = result->next;
    }
    
    return 0;
}
