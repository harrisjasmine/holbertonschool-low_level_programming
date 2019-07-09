#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string passed in
 * @c: character to look fo
 * Return: pointer to string where first occurence of character or NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == '\0')
		{
			return ('\0');
		}
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
