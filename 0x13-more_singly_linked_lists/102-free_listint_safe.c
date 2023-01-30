#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list and sets the head to NULL
 * @h: a double pointer to the head of the linked list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *temp, *current = *h;
    size_t count = 0;

    while (current)
    {
        temp = current;
        current = current->next;
        count++;
        free(temp);
        if (current == *h)
        {
            break;
        }
    }
    *h = NULL;
    return (count);
}
