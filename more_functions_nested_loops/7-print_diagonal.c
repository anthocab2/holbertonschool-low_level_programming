#include "main.h"

/**
 * print_diagonal - draws a diagonal line using '\'
 * @n: number of times '\' should be printed
 *
 * Description: If n is 0 or less, prints only a new line
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
/* imprime espacios antes de la diagonal */
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\'); /* imprime el caracter diagonal */
_putchar('\n'); /* salta a la siguiente línea */
}
}
