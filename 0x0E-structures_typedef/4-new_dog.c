#include "dog.h"

char *_strdup(char *str);

/**
 * *new_dog - function that creates a new dog
 * @name: char pointer to dog name
 * @age: float to dog age
 * @owner: char pointer to owner name
 * Return: a new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *another_dog;

	another_dog = malloc(sizeof(dog_t));
			if (another_dog == NULL)
				return (NULL);
	if (name == 0)
		return (NULL);

	if (owner == 0)
		return (NULL);

	another_dog->name = _strdup(name);
		if (another_dog->name == NULL)
		{
			free(another_dog);
			return (NULL);
		}
	another_dog->age = age;

	another_dog->owner = _strdup(owner);
		if (another_dog->owner == NULL)
		{
			free(another_dog->name);
			free(another_dog);
			return (NULL);
		}

	return (another_dog);
}

/**
 * _strdup - function that returns a pointer to newly allocated space
 * @str: pointer to a string that will be duplicated
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
int i, j;
char *newstr;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
	;
}

newstr = (char *)malloc(i + 1 * sizeof(char));
if (newstr == NULL)
	return (NULL);

	for (j = 0; str[j] != '\0'; j++)
{
	newstr[j] = str[j];
}
newstr[j] = '\0';
return (newstr);
}
