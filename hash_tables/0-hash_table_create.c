#include "hash_tables.h"

/**
 * hash_table_create - Create an hash_table
 * with specified size
 * @size: Size of hash_table
 * Return: hash_table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
