#include "holberton.h"

/**
 * _strncpy - function tht copies a string
 * @dest: string to add to
 * @src: string put into the other
 * @n: number of places to place into original string
 * Return: pointer character
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start;
	int i;

	start = dest;
	for (i = 0; i < n && *src; i++)
	{
		*dest = *src;
			dest++;
			src++;
	}
	for ( ; i < n; i++)
	{
		*dest = '\0';
			dest++;
	}
	return (start);
}
