#include <stdio.h>
#include "dog.h"

/**
* print_dog - imprime los elementos de una estructura dog
* @d: puntero a la estructura dog a imprimir
*
* Return: nada
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
