#include "main.h"

/**
 * _puts - a function that prints string
 * @str: input
 * Return: 0 Success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
