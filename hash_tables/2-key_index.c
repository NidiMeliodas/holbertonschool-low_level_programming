#include "hash_tables.h"

/**
 * key_index - Get array index by key
 * @key: key used to search index
 * @size: Size of the hash_table array
 * Return: index linked with specified key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
