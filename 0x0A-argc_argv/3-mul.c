#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two number
 * @argc: number of arguments
 * @argv: array of pointers to strings which are those arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int sum;
		int first_number = atoi(argv[1]);
		int second_number = atoi(argv[2]);

		sum = first_number * second_number;
		printf("%d\n", sum);
	}
	return (0);
}
