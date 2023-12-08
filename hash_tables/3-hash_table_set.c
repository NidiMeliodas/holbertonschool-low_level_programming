#include "hash_tables.h"

/**
 * hash_table_set - Define key association with a value
 * @ht: hash_table to edit
 * @key: key to change value associated
 * @value: value to associate with key
 * Return: (1 on success, 0 on fail)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;

	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		/* if keys match */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
