#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int last;

last = n % 10;      /* obtiene el último dígito */
if (last < 0)
last = -last;   /* si es negativo, lo hace positivo */
_putchar(last + '0'); /* imprime el dígito */
return (last);       /* retorna el valor del dígito */
}
