#include <stdio.h>

/**
 * main - a function that prints the name of the file it was compiled from
 * Return: Success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
