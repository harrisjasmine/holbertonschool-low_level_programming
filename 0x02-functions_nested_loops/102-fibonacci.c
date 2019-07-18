#include <stdio.h>

/**
 * main - function to print first 50 fibonacci numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long sum;

	printf("%lu, %lu, ", num1, num2);
	for (i = 0; i < 48; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		if (i != 47)
			printf(", ");
		num1 = num2;
		num2 = sum;
	}
	putchar('\n');
	return (0);
}
