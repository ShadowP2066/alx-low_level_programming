#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;

    slow = head;
    fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
