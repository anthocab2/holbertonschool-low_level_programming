#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
int i = 0;

/* Primero contamos la longitud del string */
while (s[i] != '\0')
i++;

/* Luego recorremos desde el final hasta el inicio */
while (i > 0)
_putchar(s[--i]);

/* Nueva línea al final */
_putchar('\n');
}
