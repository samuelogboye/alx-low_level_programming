#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves the value associated with a key
 * @ht: Table
 * @key: A key
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	item = ht->array[index];
	while (item && strcmp(item->key, key) != 0)
		item = item->next;

	return ((item == NULL) ? NULL : item->value);
}
