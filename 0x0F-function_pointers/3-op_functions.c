#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that returns sum of a and b
 * @a: first number
 * @b: second number
 * Return: sum of first number plus second
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns difference of a and b
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns division of a and b
 * @a: first number
 * @b: second number
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns remainder of division by a and b
 * @a: first number
 * @b: second number
 * Return: remainder of two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
