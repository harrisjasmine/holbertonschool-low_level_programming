#include <stdio.h>

/**
 * main - program that prints sum of even valued fib num
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long sum = 0;
	unsigned long even_sum = 2;

	while (sum < 4000000)
	{
		sum =  num1 + num2;
			if (sum % 2 == 0)
				even_sum = even_sum + sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%lu", even_sum);
	putchar('\n');
	return (0);
}
