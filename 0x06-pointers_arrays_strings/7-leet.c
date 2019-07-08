#include "holberton.h"

/**
 * leet - fuctiont hat encodes a string in 1337
 *
 * Return: pointer to string
 */

#define ARRAY_LENGTH 5

char *leet(char *b)
{
	int letter[ARRAY_LENGTH][3] = {
		{ 97, 65, 52 },
		{ 101, 69, 51 },
		{ 111, 79, 48 },
		{ 116, 84, 55 },
		{ 108, 76, 49 },
	};

	char *beginning = b;
	int i;

	while (*b)
	{
		for (i = 0; i < ARRAY_LENGTH; i++)
		{
			if (*b == letter[i][0] || *b == letter[i][1])
				*b = letter[i][2];
		}

		b++;
	}

	return (beginning);
}
