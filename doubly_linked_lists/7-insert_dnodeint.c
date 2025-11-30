#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to the head of the list
* @idx: index where the new node should be added (starts at 0)
* @n: value of the new node
*
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *new_node, *current;

if (!h)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

current = *h;
while (current && i < idx - 1)
{
current = current->next;
i++;
}

if (!current)
return (NULL);

if (!current->next)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = current;
new_node->next = current->next;
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
