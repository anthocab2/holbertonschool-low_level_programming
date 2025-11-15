#include "dog.h"

/**
* init_dog - inicializa una variable del tipo struct dog
* @d: puntero a la estructura que se va a inicializar
* @name: nombre del perro
* @age: edad del perro
* @owner: dueño del perro
*
* Return: nada (void)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
