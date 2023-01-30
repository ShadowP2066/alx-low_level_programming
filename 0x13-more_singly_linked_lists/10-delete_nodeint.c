#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index in a listint_t list
 * @head: double pointer to head of list
 * @index: index of node to delete, starting at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp = *head, *to_delete;
    unsigned int i;

    if (!head || !(*head))
        return (-1);

    if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return (1);
    }

    for (i = 0; temp && i < index - 1; i++)
        temp = temp->next;
    if (!temp || !temp->next)
        return (-1);

    to_delete = temp->next;
    temp->next = to_delete->next;
    free(to_delete);

    return (1);
}
