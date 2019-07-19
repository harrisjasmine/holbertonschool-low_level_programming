#include "holberton.h"
#include <stdio.h>

/**
5  * print_sum - prints the sum of 3 and 5 multiples of 1024
6  * @n: number to print sum of mul of 3 and 5
7  */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum = sum + 1;
		else if (i % 3 == 0)
			sum = sum + 1;
		else if (i % 5 == 0)
			sum = sum + 1;
		else
			continue;
	}
	printf("%d\n", sum);

	return (0);
}
