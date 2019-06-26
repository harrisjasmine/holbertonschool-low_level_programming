#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - Print numbers from n to 98
  * @n: starting number
  * Return: void
  */

void print_to_98(int n)
{
	int increment = n > 98 ? -1 : 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += increment;
	}

	printf("98\n");
}
