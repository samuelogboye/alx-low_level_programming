#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: The key
 * @size: the size of the hash table
 * Return: the index at which the key/value paid should be stored in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
