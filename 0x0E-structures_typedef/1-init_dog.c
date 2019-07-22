#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to dog struct
 * @name: char pointer passed in for name
 * @age: float passed in for dog age
 * @owner: char pointer passed in for owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
