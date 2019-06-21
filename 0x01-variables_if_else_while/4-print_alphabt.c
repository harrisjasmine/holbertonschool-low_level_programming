#include <stdio.h>

/**
 * main - Function prints the alphabet in lowercase, except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = 97;
	int last_number = 122;

	while (first_number <= last_number)
	{
		if (first_number != 101 && first_number != 113)
		{
			putchar((char) first_number);
		}

		first_number++;
	}

	putchar('\n');

	return (0);
}
