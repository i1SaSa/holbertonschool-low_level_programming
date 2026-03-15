#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: the key (cannot be empty)
 * @value: value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *v_copy;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[i]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = v_copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(v_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		free(v_copy);
		return (0);
	}
	node->value = v_copy;
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
