#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes the node at index index of a dlistint_t list
* @head: pointer to the head of the list
* @index: index of the node to delete (starts at 0)
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *current;

if (!head || !*head)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current && i < index)
{
current = current->next;
i++;
}

if (!current)
return (-1);

current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;
free(current);
return (1);
}
