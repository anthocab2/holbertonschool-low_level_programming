#include "main.h"

/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59
 */
void jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0'); /* decena de la hora */
_putchar((h % 10) + '0'); /* unidad de la hora */
_putchar(':');
_putchar((m / 10) + '0'); /* decena de los minutos */
_putchar((m % 10) + '0'); /* unidad de los minutos */
_putchar('\n');           /* salto de línea después de cada minuto */
}
}
}
