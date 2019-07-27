#include <stdio.h>

/**
 * main - program that prints all possible combinations of two two digit no.
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (!(i != k && j != l))
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
