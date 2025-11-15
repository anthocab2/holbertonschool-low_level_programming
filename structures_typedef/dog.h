#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que describe un perro
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

/* Prototipo de init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
