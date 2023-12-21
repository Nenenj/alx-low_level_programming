#include "hash_tables.h"

/**
 * delete_hash_table - deletes the given hash table
 * @htable: hash table to be deleted
 */
void delete_hash_table(hash_table_t *htable)
{
    hash_node_t *current, *previous;
    unsigned long int size, index;

    if (htable == NULL)
        return;
    
    if (htable->array == NULL)
    {
        free(htable);
        return;
    }

    for (index = 0, size = htable->size; index < size; index++)
    {
        current = htable->array[index];
        while (current)
        {
            previous = current;
            current = current->next;
            free(previous->key);
            free(previous->value);
            free(previous);
        }
    }

    free(htable->array);
    free(htable);
}
