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
    print_all("ceis", 'B', 3, "stSchool");
    print_all("ceis", 'H', 42, NULL, 3.14);
    print_all("cfsi", 'A', 2.5, "Hello", 100);
    return (0);
}
