#include "holberton.h"

/**
 * prime_helper - function that helps find prime number
 * @n: number 1
 * @i: counter and primes can't be lower than two
 *
 * Return: 1 if a is 1, 0 is rem of a is 0
 */

int prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is prime
 * @n: number in
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
