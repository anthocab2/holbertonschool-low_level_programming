#include "main.h"

void rev_string(char *s)
{
int i, len;
char temp;

/* Contar la longitud de la cadena */
len = 0;
while (s[len] != '\0') /* NO usar // en C90 */
len++;

/*Intercambiar caracteres de los extremos hasta el centro */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
