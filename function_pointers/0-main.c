#include <stdio.h>
#include "function_pointers.h"

/* Prototypes for functions used by the pointer */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
