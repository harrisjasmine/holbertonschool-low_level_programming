#include "holberton.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string passed into function
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int i, numfound = 0, negcounter = 0, finalint = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			negcounter++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			finalint = finalint * 10 + (s[i] - '0');
			numfound = 1;
		}
		else if (numfound == 1)
			break;
	}
	if (negcounter % 2 == 0)
		return (finalint);

	else if (negcounter % 2 != 0)
		return (-finalint);
	else
		return (0);
}
