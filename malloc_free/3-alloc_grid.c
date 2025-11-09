#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: number of columns
* @height: number of rows
*
* Description: This function allocates memory for a grid of integers,
* initializes all elements to 0, and returns a pointer to the grid.
* If width or height is 0 or negative, or if memory allocation fails,
* it returns NULL.
*
* Return: pointer to the 2D array, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (i--)
free(grid[i]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
