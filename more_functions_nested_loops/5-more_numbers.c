#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)          /* repetir 10 veces */
{
for (j = 0; j <= 14; j++)     /* imprimir del 0 al 14 */
{
if (j >= 10)               /* si es >=10, imprimir primer dígito */
_putchar('1');
_putchar((j % 10) + '0');  /* imprimir segundo dígito */
}
_putchar('\n');                /* salto de línea al final de cada fila */
}
}
