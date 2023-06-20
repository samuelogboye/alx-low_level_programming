#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination
 * @src: The source
 * @n: The number of character to utilize
 * Return: The resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
