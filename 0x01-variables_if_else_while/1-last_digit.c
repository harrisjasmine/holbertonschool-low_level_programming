#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function output last digit of number in n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d ", n, y);
		if (n == 0)
		{
			printf("and is 0")
		}
		else if (n > 5)
		{
			printf("and is greater than 5");
		}
		else
		{
			printf("and is less than 6 and not 0");
		}
	return (0);
}
