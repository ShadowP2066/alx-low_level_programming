#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position in a listint_t list
 * @head: double pointer to head of list
 * @idx: index of list where new node should be added, starting at 0
 * @n: data for new node
 * Return: address of new node, or NULL if failed or if not possible to add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *temp = *head;
    unsigned int i;

    new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);
    new->n = n;

    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }

    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;
    if (!temp)
        return (NULL);

    new->next = temp->next;
    temp->next = new;

    return (new);
}
