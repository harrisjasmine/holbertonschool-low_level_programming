#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: appended string
 * @src: add string to dest
 * @n: the number of bytes used from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	char *beg;

	beg = dest;

	while (*dest)
		dest++;

	for (i = 0; i < n; i++)
	{
		if (*src)
		{	*dest = *src;
				dest++;
				src++;
		}
	}
		*dest = '\0';


	return (beg);
}
