#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to string s
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c = 0;
	int value_holder;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	for (b = a - 1; b >= 0; b--)
	{
		if (b > (a-1)/2)
		{
			value_holder = s[b];
			s[b] = s[c];
			s[c] = value_holder;
			c++;
		}
	}
}
