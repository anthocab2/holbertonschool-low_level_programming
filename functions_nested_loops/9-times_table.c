#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j, prod;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
prod = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}

if (prod >= 10)
{
_putchar((prod / 10) + '0'); /* decena */
_putchar((prod % 10) + '0'); /* unidad */
}
else
{
if (j != 0)
_putchar(' '); /* espacio para alinear números de un dígito */
_putchar(prod + '0'); /* imprimir número */
}
}
_putchar('\n'); /* salto de línea al final de cada fila */
}
}
