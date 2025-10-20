#include "main.h"

/**
 * main - check the code for print_last_digit
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    /* Pruebas de la función */
    print_last_digit(98);      /* imprime 8 */
    print_last_digit(0);       /* imprime 0 */
    r = print_last_digit(-1024); /* imprime 4 */
    _putchar('0' + r);        /* imprime 4 otra vez */
    _putchar('\n');            /* salto de línea */

    return (0);
}

