#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que describe un perro
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 *
 * Descripción: Define un tipo de estructura para representar un perro,
 * incluyendo su nombre, edad y dueño.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
