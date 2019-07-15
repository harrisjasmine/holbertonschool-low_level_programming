#include <stdio.h>

/**
 * main - Function prints the alphabet in lowercase, except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = 'a';
	int last_number = 'z';

	while (first_number <= last_number)
	{
		if (first_number != 'e' && first_number != 'q')
		{
			putchar(first_number);
		}

		first_number++;
	}

	putchar('\n');

	return (0);
}
