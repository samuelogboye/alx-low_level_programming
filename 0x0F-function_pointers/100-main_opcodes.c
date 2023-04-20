#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);


	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == number_of_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
