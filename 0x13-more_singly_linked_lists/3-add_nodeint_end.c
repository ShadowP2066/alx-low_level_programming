#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @n: integer value to store in new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *temp;

    new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (!*head)
    {
        *head = new;
        return (new);
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = new;

    return (new);
}
