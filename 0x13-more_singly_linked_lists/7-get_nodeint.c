#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: pointer to head of list
 * @index: index of node to return, starting at 0
 * Return: nth node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    for (i = 0; head; i++)
    {
        if (i == index)
            return (head);
        head = head->next;
    }

    return (NULL);
}
