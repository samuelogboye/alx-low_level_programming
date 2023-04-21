#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: integer
 *
 * Return: Success or 0 if otherwise
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	if (n == 0 || separator == 0)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
