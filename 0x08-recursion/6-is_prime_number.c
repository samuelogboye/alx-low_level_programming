#include "main.h"

int is_prime(int n, int i);
/**
 * is_prime_number - a function that checks if an integer is a prime number
 * @n: integer to work with
 * Return: 1 if success, 0 if otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 3));
}

/**
 * is_prime - a helper function that checks if an integer is a prime number
 * @n: interger to work with
 * @i: interator
 * Return: 1 for Suceess and 0 for otherwise
 */

int is_prime(int n, int i)
{
	if (n < 2 || (n > 2 && n % 2 == 0))
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i + 2));
	}
}
