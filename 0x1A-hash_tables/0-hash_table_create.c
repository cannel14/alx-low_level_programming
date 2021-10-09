#include <stdlib.h>
#include "hash_tables.h"

/*
 *hash_table_create - creates a hash table
 *@size : size of the array
 *
 *Return: if an error occurs - NULL
 *        Otherwise - a pointer to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *ht;

  if (size < 1)
    return (NULL);

  ht = malloc(sizeof(hash_table_t));

  if (ht == NULL)
    return (NULL);

  ht->size = size;
  ht->array = calloc(size,sizeof(hash_node_t*));

  if(ht->array == NULL)
    {
      free(ht);
      return(NULL);
    }

  return (ht);
}
