#ifndef DOG_H
#define DOG_H

/**
 * struct dog - información de un perro
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);   /* <-- FALTA ESTE PROTOTIPO */

#endif

