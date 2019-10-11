#include "hash_tables.h"
/**
 * key_index - gives user the index of a key
 * @key: key inside the hash table
 * @size: size of hash table array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
