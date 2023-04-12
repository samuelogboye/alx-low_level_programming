#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string to wowk with
 * Return: Pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int l = 0;
	size_t len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}

	len = l;

	copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);
	return (copy);
}
