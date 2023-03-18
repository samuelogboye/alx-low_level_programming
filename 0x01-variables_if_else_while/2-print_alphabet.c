#include <stdio.h>

/**
 * main- Program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
