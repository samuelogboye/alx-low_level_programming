#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recu(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if Success, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recu(s)));
}

/**
 * _strlen_recu - returns the length of a string
 * @s: string to its lenght
 * Return: length of the string
 */
int _strlen_recu(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recu(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
