#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)  /* Debemos tener exactamente 2 argumentos además del nombre */
{
printf("Error\n");
return (1);
}
/* Convertimos las cadenas a enteros */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Multiplicación */
result = num1 * num2;

printf("%d\n", result);

return (0);
}
