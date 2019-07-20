#include <stdio.h>

/**
 * main - function to print first 50 fibonacci numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	double num1 = 1;
	double num2 = 2;
	double sum;

	printf("%lu, %lu, ", num1, num2);
	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		if (i != 95)
			printf(", ");
		num1 = num2;
		num2 = sum;
	}
	putchar('\n');
	return (0);
}
