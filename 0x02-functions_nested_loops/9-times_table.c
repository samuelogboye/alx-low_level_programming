#include "main.h"
/**
 * times_table- a function that prints the 9 times table, starting with 0
 * Return: 0 on Success
 */
void times_table(void)
{
	int i = 0, j = 9, count = 0;

	while (count <= 9)
	{
		while (i <= j)
		{
			int product = count * i;

			if (i != 0)
			{
				_putchar(',');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (i == j)
				_putchar('\n');
			i++;
		}
		i = 0;
		count++;
	}
}
