#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated space
 * @str: pointer to a string
 *
 * Return:
 */

char *_strdup(char *str)
{
	int i,j;
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
