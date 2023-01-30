#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list and returns its data
 * @head: double pointer to head of list
 * Return: data (n) of head node, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (!*head)
        return (0);

    temp = *head;
    n = temp->n;
    *head = temp->next;
    free(temp);

    return (n);
}
