#include "main.h"


/**
 * print_number - a function that prints an integer
 * @n: The interger to work with
 * Return: the interger n
 */
void print_number(int n)
{
	unsigned int n1, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	while (n1 / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n1 / divisor) + '0');
		n1 %= divisor;
		divisor /= 10;
	}
}
