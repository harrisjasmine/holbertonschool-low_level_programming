#include "holberton.h"

/**
 * _atoi - converts a string to an integer, pulls integer and its sign.
 * @s: string to be evaluated.
 * Return: integer with its sign
 */

int _atoi(char *s)
{
	int dash_count = 0;
	int num_started = 0;
	int number = 0;
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			number = number * 10 - (s[i] - '0');
		}
		else
		{
			if (num_started == 1)
			{
				break;
			}
			if (s[i] == '-')
			{
				dash_count++;
			}
		}
	}
	if (dash_count % 2 == 0)
	{
		return (-number);
	}
	return (number);
}
