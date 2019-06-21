#include <stdio.h>

/**
 * main - Function prints all the single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int current_ascii_number = 48;
	int last_ascii_number = 57;

	while (current_ascii_number <= last_ascii_number)
	{
		putchar((char) current_ascii_number);

		current_ascii_number++;
	}

	putchar('\n');

	return (0);
}
