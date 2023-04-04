#include "main.h"

/**
 * _strstr - a function thaty locates a substring
 * @haystack: string to work with
 * @needle: substring
 * Return: Pointer to the beginning of the located substring or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; needle[i] && (haystack[i] == needle[i]); i++)
		{
			if (needle[i + 1])
				return (haystack);
		}
	}
	return ('\0');
}
