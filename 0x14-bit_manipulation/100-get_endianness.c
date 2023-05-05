#include "main.h"

/**
  * get_endianness - get the endianness
  *
  * Description: A C program to find out if the underlying
  *		architecture is little endian or big endian
  *
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
