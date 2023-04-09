#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its namem, followed by a new line
 * @argc: Argument count
 * @argv: array of argument
 * Return: Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
