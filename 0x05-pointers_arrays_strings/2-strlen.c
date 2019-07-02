#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: character parameter
 * Return: length of strengh if successful
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	return (a);
}
