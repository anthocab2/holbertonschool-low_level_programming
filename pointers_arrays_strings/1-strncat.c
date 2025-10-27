#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* find end of dest */
while (dest[i] != '\0')
i++;

/* append at most n chars from src */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

/* add terminating null byte */
dest[i] = '\0';

return (dest);
}
