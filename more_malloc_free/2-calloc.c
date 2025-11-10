#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes it to 0
* @nmemb: number of elements
* @size: size of each element in bytes
*
* Description: Allocates memory for an array of nmemb elements,
* each of size bytes. The allocated memory is initialized to zero.
* Returns NULL if nmemb or size is 0, or if malloc fails.
*
* Return: pointer to the allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total, i;

if (nmemb == 0 || size == 0)
return (NULL);

total = nmemb * size;

ptr = malloc(total);
if (ptr == NULL)
return (NULL);

for (i = 0; i < total; i++)
ptr[i] = 0;

return ((void *)ptr);
}
