#include "main.h"

/**
  * flip_bits -  function that returns the number of bits you
  * would need to flip to get from one number to another
  * @n: Pointer to bit value
  * @m: of the bit
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip_bit = 0;

	while (n)
	{
		if ((n & 1) != (m & 1))
			flip_bit++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip_bit);
}
