#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters to upper
 * @b: pointer to string
 * Return: pointer to string
 */

char *string_toupper(char *b)
{
	char *current_char = b;

	while (*current_char)
	{
		if (*current_char >= 97 && *current_char <= 122)
		{
			*current_char = *current_char - 32;
		}
		current_char++;
	}

	return (b);
}
