#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct ListNode *mytest83(struct ListNode *head);

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    return mytest83(head);
}

struct ListNode *mytest83(struct ListNode *head)
{
    typedef struct ListNode LIST;
    LIST *q;
    q = head;
    while (q != NULL)
    {
        LIST *p = q->next;
        while (p != NULL && q->val == p->val)
            p = p->next;
        q->next = p;
        q = q->next;
    }

    return head;
}