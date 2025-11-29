#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check free_list
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head = malloc(sizeof(list_t));
list_t *second;

head->str = strdup("Hello");
head->len = 5;

second = malloc(sizeof(list_t));
second->str = strdup("World");
second->len = 5;

head->next = second;
second->next = NULL;

free_list(head);

return 0;
}
