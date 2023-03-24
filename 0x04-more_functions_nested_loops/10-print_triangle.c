#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: of the triangle
 * good
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 0; j <= (size - 1); j++)
	{
		for (i = 0; i < (size - 1) - j; i++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
}
