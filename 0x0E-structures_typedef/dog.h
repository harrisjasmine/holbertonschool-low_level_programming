#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog metrics
 * @name: character pointer containing name of dog
 * @age: float containing age of dog
 * @owner: character pointer containing owner name
 *
 * Description: struct that holds information on a struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
