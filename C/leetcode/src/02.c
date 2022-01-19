#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
 * 2022.1.18
 * 下面是第一次完成的代码内容
 * 总的来说4个字，大粪代码
 * 我尝试改进一下
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *answer, *header;
    header = answer = NULL;
    bool is_get = false;
    while (l1 && l2)
    {
        int temp = l1->val + l2->val;
        if (is_get) // 是否有进位
        {
            temp++;
            is_get = false;
        }
        if (temp >= 10) // 检查当前是否需要进位
            is_get = true;
        temp %= 10;

        struct ListNode *new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->val = temp;
        new->next = NULL;
        if (header == NULL)
        {
            header = new;
            answer = new;
        }
        else
        {
            answer->next = new;
            answer = answer->next;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1)
    {
        int temp = l1->val;
        if (is_get)
        {
            temp++;
            is_get = false;
        }
        if (temp >= 10)
            is_get = true;
        temp %= 10;

        struct ListNode *new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->val = temp;
        new->next = NULL;
        answer->next = new;
        answer = answer->next;

        l1 = l1->next;
    }
    while (l2)
    {
        int temp = l2->val;
        if (is_get)
        {
            temp++;
            is_get = false;
        }
        if (temp >= 10)
            is_get = true;
        temp %= 10;

        struct ListNode *new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->val = temp;
        new->next = NULL;
        answer->next = new;
        answer = answer->next;

        l2 = l2->next;
    }

    if (is_get)
    {
        struct ListNode *new = (struct ListNode *)malloc(sizeof(struct ListNode));
        new->val = 1;
        new->next = NULL;
        answer->next = new;
        answer = answer->next;
    }

    return header;
}