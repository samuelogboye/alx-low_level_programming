#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money
 * @argc: Number of Argument passed
 * @argv: string of argument
 * Return: success
 */
int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
	}

	coins += cent / 25;
	cent %= 25;

	coins += cent / 10;
	cent %= 10;

	coins += cent / 5;
	cent %= 5;

	coins += cent / 2;
	cent %= 2;

	coins += cent;

	printf("%d\n", coins);

	return (0);
}
