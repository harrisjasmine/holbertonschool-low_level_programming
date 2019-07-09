#include "holberton.h"

/**
 *
 *
 *
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
