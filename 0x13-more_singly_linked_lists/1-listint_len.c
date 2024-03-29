#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }

    return (count);
}
