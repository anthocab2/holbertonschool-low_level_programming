#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');  /* imprime el número */
if (i != 9)        /* imprime coma y espacio si no es el último */
{
putchar(',');
putchar(' ');
}
}

putchar('\n');          /* salto de línea al final */

return (0);
}
