#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: starting integer
* @max: ending integer
*
* Description: Allocates memory for an array of integers
* containing all values from min to max inclusive, ordered
* from min to max. Returns NULL if min > max or allocation fails.
* * Return: pointer to the new array, or NULL on failure
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
