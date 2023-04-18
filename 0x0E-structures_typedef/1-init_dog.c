#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a functionm that initialize a variable of type struct dog
 * @d: a pointer
 * @name: an element
 * @age: an element
 * @owner: an element
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
