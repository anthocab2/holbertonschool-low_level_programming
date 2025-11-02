#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* caso base: fin de la cadena */
{
_putchar('\n');
return;
}

_putchar(*s);          /* imprime el caracter actual */
_puts_recursion(s + 1); /* llamada recursiva al siguiente caracter */
}
