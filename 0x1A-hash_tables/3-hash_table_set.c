#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeds or 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size); /*the index */

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (0); /* Invalid input parameter */
	}


	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	/* duplicate the key and value strings */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL)
	{
		free(new_node);
		return(0);
	}
	/* Handle collision, add new node at the begining of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
