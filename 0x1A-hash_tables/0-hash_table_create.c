#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: The size of the table
 * Return: The hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}


	hash_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	return (hash_table);
}
