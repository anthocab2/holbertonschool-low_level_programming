#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 3, "Hello", NULL, "World");
    print_strings(NULL, 2, "Jay", "Django");
    return (0);
}
