#include <stdio.h>
#include <header.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l1 = {1, 2, 4};
    int l2 = {1, 3, 4};

    struct ListNode *list1, *list2;
    for (int i = 0; i < 3; i++)
    {
        struct ListNode *new = (struct ListNode *)malloc(sizeof(struct ListNode));
    }

    return 0;
}
