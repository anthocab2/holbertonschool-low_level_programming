#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')  /* recorre la cadena hasta el carácter nulo */
{
_putchar(str[i]);   /* imprime un carácter a la vez */
i++;
}
_putchar('\n');         /* imprime salto de línea al final */
}
