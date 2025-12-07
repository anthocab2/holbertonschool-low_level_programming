#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: Hash table
* @key: Key to add
* @value: Value associated with the key
*
* Return: 1 if success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *tmp;

if (!ht || !key || *key == '\0' || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];

/* Check if key already exists and update value */
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
if (!tmp->value)
return (0);
return (1);
}
tmp = tmp->next;
}

/* Create new node */
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (!new_node->key || !new_node->value)
{
if (new_node->key)
free(new_node->key);
if (new_node->value)
free(new_node->value);
free(new_node);
return (0);
}

/* Insert at the beginning of the list */
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
