#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;

/* imprime números del 0 al 9 */
for (i = 0; i <= 9; i++)
putchar(i + '0');

/* imprime letras a-f */
for (c = 'a'; c <= 'f'; c++)
putchar(c);

/* salto de línea */
putchar('\n');

return (0);
}
