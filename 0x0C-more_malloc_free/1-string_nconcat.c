#include "main.h"
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of allocated memory
 * Return: Newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[s1_len + i] = s2[i];
	}
	result[s1_len + n] = '\0';
	return (result);
}
