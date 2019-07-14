#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to original character to string
 * @needle: secondary string being compared to
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *reset;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack != '\0'; haystack++)
	{
		for (start = needle; *start != '\0'; start++)
		{
			reset = haystack;

			if (*start == *reset)
			{
				start++;
				reset++;
			}
			if (*start != *reset)
			{
				break;
			}
			if (*start != '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
