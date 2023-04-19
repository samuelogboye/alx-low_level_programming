#include "function_pointers.h"

/**
 * print_name - a function that prints
 * @name: pointer
 * @f: function pointer
 * Return: SUccess
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
