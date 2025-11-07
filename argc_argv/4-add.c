#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc == 1) /* No numbers passed */
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++) /* Recorremos los argumentos, excepto argv[0] */
{
for (j = 0; argv[i][j] != '\0'; j++) /* Revisamos cada carácter */
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]); /* Convertimos a entero y sumamos */
}

printf("%d\n", sum);

return (0);
}
