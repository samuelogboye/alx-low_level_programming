#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: Argument count
 * @argv: array of argument
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
