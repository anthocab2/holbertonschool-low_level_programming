#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing bytes to match
 *
 * Return: pointer to the first occurrence in s of any byte from accept,
 *         or 0 if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
return (s);
}
s++;
}

return (0); /* use 0 instead of NULL to comply with Holberton rules */
}
