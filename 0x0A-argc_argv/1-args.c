#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments passed into
 * @argv: array of pointers to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc <= 1)
		printf("%d\n", 0);
	else
		printf("%d\n", argc - 1);
		return (0);
}
