#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int i;

	while (s[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
