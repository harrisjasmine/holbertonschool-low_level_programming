#include <stdio.h>

/**
 * main - Function prints the alphabet in lowercase in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int current_ascii_number = 122;
	int last_ascii_number = 97;

	while (current_ascii_number >= last_ascii_number)
	{
		putchar((char) current_ascii_number);

		current_ascii_number--;
	}

	putchar('\n');

	return (0);
}
