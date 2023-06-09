#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: Second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	result = malloc(len1 + len2 + 1);
	if (!result)
	{
		return (NULL);
	}
	if (s1)
	{
		memcpy(result, s1, len1);
	}
	if (s2)
	{
		memcpy(result + len1, s2, len2);
	}

	result[len1 + len2] = '\0';
	return (result);
}
