/*
 *key_index: function that gives you the index of a key
 *@key: is key
 *@size: size of the array of the hash table
 *
 *Returns:index at which the key/value pair should be stored in the array of the hash table
 */

#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  unsigned long int hash = hash_djb2(key);

  return (hash % size);
}
