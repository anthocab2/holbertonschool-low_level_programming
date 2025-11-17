#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/* Struct to map type to its print function */
typedef struct printer
{
char type;
void (*f)(va_list);
} printer_t;

/* Print functions for each type */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
char *str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
}

/* Main function for task 3 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *sep = "";

printer_t printers[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string}
};

va_start(args, format);

 if (format) /* primer if */
{
while (format[i])
{
j = 0;
while (j < 4)
{
if (format[i] == printers[j].type) /* segundo if */
{
printf("%s", sep);
printers[j].f(args);
sep = ", ";
}
j++;
}
i++;
}
}

va_end(args);
printf("\n");
}
