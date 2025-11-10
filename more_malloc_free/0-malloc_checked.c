#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size in bytes to allocate
*
* Description: This function allocates @b bytes using malloc.
* If malloc fails, the program is terminated with exit status 98.
*
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
