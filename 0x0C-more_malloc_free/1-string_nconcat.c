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
 * _strcat - funtion that concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * Return: a pointer resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *beginning = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (beginning);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2
 *
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int concatcounter;
	unsigned int str1sum, str2sum, j, k, l, total_sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1sum = (unsigned int)_strlen(s1);
	if (n >= (unsigned int)_strlen(s2))
	{
		str2sum = (unsigned int)_strlen(s2);
	}
	else
	{
		for (j = 0; s2[j] != '\0' && j < n; j++)
			;
		str2sum = j;
	}
	total_sum = str1sum + str2sum + 1;
	concatstr = malloc(sizeof(char) * total_sum);
		if (concatstr == NULL)
			return (NULL);
	for (l = 0, concatcounter = 0; l < str1sum; l++, concatcounter++)
		concatstr[concatcounter] = s1[l];

	for (k = 0; k < str2sum; k++, concatcounter++)
		concatstr[concatcounter] = s2[k];

	concatstr[concatcounter] = '\0';

	return (concatstr);
}
