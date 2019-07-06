#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: first difference between first and second string characters or 0
 */
int _strcmp(char *s1, char *s2)
{
	int diff = *s1 - *s2;

	while (*s1 && *s2)
	{
		if (diff)
		{
			break;
		}

		diff = *++s1 - *++s2;
	}

	return (diff);
}
