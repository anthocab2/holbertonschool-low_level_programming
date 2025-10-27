#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src to the end of dest
 * @dest: destination buffer, must contain a valid string and enough space
 * @src: source string to append to dest
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* Mover i al final de dest */
while (dest[i] != '\0')
i++;

/* Copiar src al final de dest */
while (src[j] != '\0')
    {
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
