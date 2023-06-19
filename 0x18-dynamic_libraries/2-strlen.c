#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: input
 * Return: 0 Success
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
