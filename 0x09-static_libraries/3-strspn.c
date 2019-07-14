#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial string passed in to be compared
 * @accept:  secondary string compared against the first
 * Return: sum of the bytes in the string
 */

unsigned int _strspn(char *s, char *accept)
{
	int sum = 0;
	char *start = accept;

	for (; (*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122); s++)
	{

		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				sum = sum + 1;
		}
		accept = start;
	}

	return (sum);
}
