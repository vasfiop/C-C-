#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void recursion(struct ListNode *list1, struct ListNode *list2, struct ListNode *header);
struct ListNode *myTest_21(struct ListNode *list1, struct ListNode *list2);

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    return myTest_21(list1, list2);
}
// 官方链表
struct ListNode *answerList(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
        return list2;
    else if (list2 == NULL)
        return list1;
    else if (list1->val < list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}
// 我自己尝试
struct ListNode *myTest_21(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    struct ListNode *header = (struct ListNode *)malloc(sizeof(struct ListNode));

    recursion(list1, list2, header);

    return header->next;
}
void recursion(struct ListNode *list1, struct ListNode *list2, struct ListNode *header)
{
    if (list1 == NULL)
    {
        header->next = list2;
        return;
    }
    if (list2 == NULL)
    {
        header->next = list1;
        return;
    }

    if (list1->val > list2->val)
    {
        header->next = list2;
        recursion(list1, list2->next, header->next);
    }
    else
    {
        header->next = list1;
        recursion(list1->next, list2, header->next);
    }

    return;
}