#include "main.h"

int find_sqrt(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: Success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}

/**
 * find_sqrt - to find the natural square root of a number
 * @n: number
 * @i: to iterate
 * Return: the  square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
