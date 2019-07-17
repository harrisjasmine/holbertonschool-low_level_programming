#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to newly allocated space with concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *cats1s2;
	char *catbeg;
	int totallength;

	totallength = _strlen(s1) + _strlen(s2);

	cats1s2 = (char *)malloc((totallength + 1) * sizeof(char));

	catbeg = cats1s2;

	if (cats1s2 == NULL)
		return (NULL);

	for (; *s1 != '\0'; s1++)
	{
		*catbeg = *s1;
		catbeg++;
	}
	for (; *s2 != '\0'; s2++)
	{
		*catbeg = *s2;
		catbeg++;
	}
	*catbeg = '\0';

	return (cats1s2);
}
