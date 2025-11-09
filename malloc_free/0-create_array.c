#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars and initializes it with a specific char
* @size: the size of the array
* @c: the character to initialize the array with
*
* Description: This function allocates memory for an array of characters
* of size @size, fills it with the character @c, and returns a pointer
* to the array. If @size is 0 or memory allocation fails, it returns NULL.
*
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
