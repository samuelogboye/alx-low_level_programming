#include "main.h"
/**
 * puts2 - a function to print string
 * @str: Input string
 * Return: String in reverse
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
