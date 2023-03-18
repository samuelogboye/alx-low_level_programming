#include <stdio.h>

/**
 * main- Program that prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: 0 (Success)
*/
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
