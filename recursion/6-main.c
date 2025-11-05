#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", is_prime_number(2));
    printf("%d\n", is_prime_number(13));
    printf("%d\n", is_prime_number(25));
    printf("%d\n", is_prime_number(-1));
    return (0);
}
