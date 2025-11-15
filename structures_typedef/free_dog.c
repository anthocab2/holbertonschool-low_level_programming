#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libera la memoria de un perro creado con new_dog
 * @d: puntero al perro a liberar
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    if (d->name != NULL)
        free(d->name);
    if (d->owner != NULL)
        free(d->owner);
    free(d);
}
