#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
*
* Description: This function allocates memory to hold both strings,
* concatenates them, and returns a pointer to the newly allocated space.
* If NULL is passed, it is treated as an empty string.
*
* Return: pointer to the new concatenated string,
* or NULL if memory allocation fails
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
