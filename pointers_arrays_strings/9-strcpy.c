#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Buffer to copy to
 * @src: Source string to copy from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Terminate the string */
return dest;
}
