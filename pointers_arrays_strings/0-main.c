#include "main.h"
#include <stdio.h>

/**
 * main - check the _strcat function
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);   /* Imprime s1 antes de concatenar */
    printf("%s", s2);     /* Imprime s2 antes de concatenar */
    ptr = _strcat(s1, s2);/* Llama a nuestra función */
    printf("%s", s1);     /* Imprime s1 después de concatenar */
    printf("%s", s2);     /* Imprime s2 (sin cambios) */
    printf("%s", ptr);    /* Imprime el puntero devuelto (s1 concatenado) */
    return (0);
}
