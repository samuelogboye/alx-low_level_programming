#include "main.h"
/**
 * _isalpha(int c)- a function that checks for lowercase character
 * @c: the char to be checked
 * Return: 1 is the char is lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
