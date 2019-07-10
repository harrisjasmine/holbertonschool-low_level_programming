#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack:
 * @needle:
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack != '\0'; haystack++)
	{
			for (start = needle; *start != '\0'; start++)
			{
				if (*start == *haystack)
				{
					start++;
					haystack++;
				}
				if (*start != *haystack)
				{
					break;
				}
				if (*start != '\0')
				{
					return (needle);
				}
			}
	}
	return (NULL);
}
