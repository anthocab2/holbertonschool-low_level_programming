#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - prueba sum_them_all
 *
 * Return: 0
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum); /* 1122 */

    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum); /* 500 */

    sum = sum_them_all(0);
    printf("%d\n", sum); /* 0 */

    return 0;
}
