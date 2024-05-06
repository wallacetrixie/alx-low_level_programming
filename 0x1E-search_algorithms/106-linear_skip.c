#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present in the list or if
 *         the head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *next = NULL;

    if (list == NULL)
        return (NULL);

    while (current->express != NULL && current->n < value)
    {
        next = current->express;
        printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
        current = next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, next->index);

    while (current != NULL && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}

