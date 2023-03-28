#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to work with
 * Return: 0 Success
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;
	char *j = str;

	while (*j)
	{
		j++;
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (i = n; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
