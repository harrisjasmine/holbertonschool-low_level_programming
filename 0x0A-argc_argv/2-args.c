#include <stdio.h>

/**
 *  main - functiont that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers to strings which are those arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
