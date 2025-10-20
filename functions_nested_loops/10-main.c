#include "main.h"
#include <stdio.h>

/**
 * main - prueba la función add
 *
 * Return: siempre 0
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n); /* Salida: 98 */
    return (0);
}
