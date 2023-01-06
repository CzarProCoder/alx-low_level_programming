#include "main.h"

/**
 * check_prime
 * @n: Number to be evaluated
 * @divisor: The divisor
 * Return: 1 if n is prime number; else 0.
 */

int check_prime(int n, int divisor)
{
	if ((n % divisor) == 0)
		return (0);
	if (n <= divisor)
		return (1);
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number(int n)
 * @n: Number to be evaluated
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n =< divisor)
		return (0);
	if (n == divisor)
		return (1);

	return (check_prime(n, divisor));
}
