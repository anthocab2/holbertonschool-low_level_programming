#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

**
* main - check add_node_end
*
* Return: Always 0.
*/
int main(void)
{
list_t *head = NULL;

add_node_end(&head, "Hello");
add_node_end(&head, "World");

print_list(head);

free_list(head);
return (0);
}
