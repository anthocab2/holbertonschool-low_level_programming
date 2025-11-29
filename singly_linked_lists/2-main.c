#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check add_node
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head = NULL;
list_t *temp;

add_node(&head, "Hello");
add_node(&head, "World");

/* recorrer manualmente e imprimir */
temp = head;
while (temp)
{
if (temp->str)
printf("[%u] %s\n", temp->len, temp->str);
else
printf("[0] (nil)\n");
temp = temp->next;
}

/* liberar memoria */
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}

return 0;
}
