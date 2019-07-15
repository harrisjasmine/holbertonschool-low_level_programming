#include "holberton.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * checkdigit - check if a char is a number
 * @num: number checked
 * Return: 0 if not a digit. 1 if is a digit
 */

int checkifdigit(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
		if (!isdigit(num[i]))
			return (0);
	return (1);
}

/**
 * main - function adds positive numbers
 * @argc: number of arguments
 * @argv: vector of strings passed to program.
 * Return: 1 if digit is passed. 0 if no number is passed
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i < argc; ++i)
	{

		if (checkifdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%u\n", sum);

	return (0);
}
