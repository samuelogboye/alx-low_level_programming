#include "main.h"

/**
  * clear_bit - function that sets the value of
  * a bit to 0 at a given index.
  * @n: Pointer to bit value
  * @index: of the bit
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n = *n & (~(1 << index));

	return (1);
}
