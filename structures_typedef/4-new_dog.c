#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog_t
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to new dog_t or NULL if allocation fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
int i;

if (!name || !owner)
return (NULL);

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);

/* Allocate memory for name */
for (i = 0; name[i]; i++)
;
name_copy = malloc(i + 1);
if (!name_copy)
{
free(d);
return (NULL);
}
for (i = 0; name[i]; i++)
name_copy[i] = name[i];
name_copy[i] = '\0';

/* Allocate memory for owner */
for (i = 0; owner[i]; i++)
;
owner_copy = malloc(i + 1);
if (!owner_copy)
{
free(name_copy);
free(d);
return (NULL);
}
for (i = 0; owner[i]; i++)
owner_copy[i] = owner[i];
owner_copy[i] = '\0';

d->name = name_copy;
d->age = age;
d->owner = owner_copy;
return (d);
}
