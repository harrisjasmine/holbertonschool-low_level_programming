#include "holberton.h"

/**
 * _strcat - funtion that concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * Return: a pointer resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
