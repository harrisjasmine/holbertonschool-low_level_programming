#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:
 * @accept:
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *start;

	for (; *s != '\0'; s++)
	{
		for (start = accept; *start != '\0'; start++)
		{
			if (*s == *start)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
