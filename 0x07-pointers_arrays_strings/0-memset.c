#include "holberton.h"

/**
 * _memset - function that fills memmory with a constant byte
 * @b: constant byte
 * @s: pointer character string
 * @n: bytes of memory area pointed to
 * Return: pointer to a character string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *end = s + n - 1;
	char *start = s;

	for (; start <= end; start++)
	{
		*start = b;
	}

	return (s);
}
