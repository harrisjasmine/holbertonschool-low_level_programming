#include "holberton.h"
#include <stdio.h>

/**
5  * print_sum - prints the sum of 3 and 5 multiples of 1024
6  * @n: number to print sum of mul of 3 and 5
7  */

void print_sum(int n)
{
	int i;
	int mul35;
	int mul3;
	int mul5;
	int sum;

	for (i = 0; i < n; i++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			mul35 += n;
		if (n % 3 == 0)
			mul3 += n;
		if (n % 5 == 0)
			mul5 += n;
		sum = mul35 + mul3 + mul5;
	}

	printf("%d\n", sum);
}
