#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - crea un nuevo perro (dog_t)
* @name: nombre del perro
* @age: edad del perro
* @owner: nombre del dueño
*
* Return: puntero a dog_t recién creado o NULL si falla
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy;
char *owner_copy;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
strcpy(name_copy, name);

owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
strcpy(owner_copy, owner);

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
