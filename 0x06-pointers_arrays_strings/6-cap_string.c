#include "holberton.h"

#define separator_length 13

/**
 * is_separator - function that determines if the character is a separator
 * @character: character to check
 * Return: true if it is a separator, otherwise false
 */
int is_separator(char character)
{
	int i;
	char separator[separator_length] = {
		'\n', '\t', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 0; i < separator_length; i++)
	{
		if (separator[i] == character)
			return (1);
	}

	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string
 * @b: string pointer passed in
 * Return: pointer to a string
 */

char *cap_string(char *b)
{
	char *current = b;

	while (*current)
	{
		if (*(current + 1) <= 122 && *(current + 1) >= 97)
			if (is_separator(*current))
				*(current + 1) -= 32;

		current++;
	}

	return (b);
}
