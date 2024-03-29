#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes of info to copy
 * @src: area copied from
 * @dest: area copie to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *beggining = dest;
	char *end = src + n - 1;

	for (; src <= end; src++)
	{
		*beggining = *src;
				beggining++;
	}

	return (dest);
}
