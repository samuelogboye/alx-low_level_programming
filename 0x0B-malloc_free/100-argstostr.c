#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * argstostr - a function that concatenates all the arguments of a program
 * @ac: an argument
 * @av: another argument
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	result = malloc(len + ac + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + len, av[i]);
		len += strlen(av[i]);
		result[len++] = '\n';
	}
	result[len] = '\0';

	return (result);
}
