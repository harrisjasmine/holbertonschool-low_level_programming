#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments in program
 * @ac: number of arguments
 * @av: array of strings contaiing arguments
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *catarg;
	int i, j, k, l;
	int sum = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0'; j++)
		{
			sum = sum + 1;
		}
	}
	sum = sum + ac + 1;

	catarg = (char *)malloc(sum * sizeof(char));
	sum = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			catarg[sum] = av[k][l];
			sum++;
		}
		catarg[sum] = '\n';
		sum++;
	}
	catarg[sum] = '\0';

	return (catarg);
}
