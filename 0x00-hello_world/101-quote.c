#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	int length_of_quote = sizeof(
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	);
	write(
		2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		length_of_quote
	);
	return (1);
}
