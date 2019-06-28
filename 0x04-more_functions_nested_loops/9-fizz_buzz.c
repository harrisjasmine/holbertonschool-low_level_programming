#include <stdio.h>

/**
 * main - fizz buzz program
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}

			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", a);
		}

		printf(" ");
	}
	printf("Buzz\n");
	return (0);
}
