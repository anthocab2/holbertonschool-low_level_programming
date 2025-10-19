#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

/* Imprime letras minúsculas */
for (c = 'a'; c <= 'z'; c++)
putchar(c);

/* Imprime letras mayúsculas */
for (c = 'A'; c <= 'Z'; c++)
putchar(c);

/* Salto de línea */
putchar('\n');

return (0);
}
