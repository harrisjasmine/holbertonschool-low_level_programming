#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (i != j)
				if (j != l)
				if (i != l)
				if (i < j)
				if (j < l)
				{
					putchar(i);
					putchar(j);
					putchar(l);
					if (i < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
