#include "holberton.h"

#define MAX 26
#define KEY 13
#define LOWER_CASE_BASE 97
#define UPPER_CASE_BASE 65

int _isalpha(int c);

int _islower(int c);

/**
 * _isalpha - function that checks for alphabetic character
 * @c: ASCII value for a character
 * Return: 1 if c is an alphabetic letter or 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

/**
 * _islower - function that checks for lowercase character
 * @c: ASCII value for character
 *Return: 1 if c is lowercaase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * rot13 - function that encodes a string using rot13
 * @s: string passed into rot13
 * Return: pointer to  character string
 */

char *rot13(char *s)
{
	int base;
	char *beginning = s;

	while (*s != '\0')
	{
		while (_isalpha(*s))
		{
			if (_islower(*s))
			{
				base = LOWER_CASE_BASE;
			}
			else
			{
				base = UPPER_CASE_BASE;
			}

			*s = ((*s + KEY - base) % MAX) + base;

			s++;
		}

		s++;
	}

	s = beginning;
	return (s);
}

