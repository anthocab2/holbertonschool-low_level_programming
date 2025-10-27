#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize = 1; /* Primera letra de la cadena se capitaliza */

while (str[i] != '\0')
{
/* Si debemos capitalizar y el carácter es una letra minúscula */
if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
capitalize = 0;
}
else if ((str[i] >= 'A' && str[i] <= 'Z') && !capitalize)
{
/* Convertir a minúscula si no debe ser mayúscula */
str[i] = str[i] + ('a' - 'A');
}

/* Lista de separadores que marcan el inicio de una palabra */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;
}
else
{
capitalize = 0;
}

i++;
}
return str;
}
