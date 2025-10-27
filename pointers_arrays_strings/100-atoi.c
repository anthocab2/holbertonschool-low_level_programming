#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0, found = 0;

/* Step 1: recorrer la cadena */
while (s[i] != '\0')
{
/* Cambiar signo si encontramos + o - antes de los números */
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
found = 1;
num = (num * 10) + (s[i] - '0');
}
else if (found == 1)
break; /* Si ya empezamos el número y encontramos otra cosa, terminamos */
i++;
}

return (num * sign);
}
