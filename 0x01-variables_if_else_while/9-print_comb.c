#include <stdio.h>

/**
 * main - Function prints all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int current_ascii_number = 48;
	int last_ascii_number = 57;

	while (current_ascii_number <= last_ascii_number)
	{
		putchar((char) current_ascii_number);

		if (current_ascii_number != 57)
		{
			putchar(',');
			putchar(' ');
		}

		current_ascii_number++;
	}

	putchar('\n');

	return (0);
}
