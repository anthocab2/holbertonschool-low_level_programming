#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the head of the list
* @str: string to add
*
* Return: address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (!*head)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
