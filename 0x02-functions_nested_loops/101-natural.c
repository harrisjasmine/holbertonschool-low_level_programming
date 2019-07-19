#include "holberton.h"
#include <stdio.h>

/**
* main - prints the sum of 3 and 5 multiples of 1024
*
* Return: 0 if successful
*/

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum = sum + i;
		else if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum = sum + i;
		else
			continue;
	}
	printf("%d\n", sum);

	return (0);
}
