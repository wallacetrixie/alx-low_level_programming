#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present in the list or if
 *         the head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0;
    listint_t *current = list, *next = NULL;

    if (list == NULL)
        return (NULL);

    while (current != NULL && current->n < value)
    {
        next = current;
        for (size_t i = 0; current != NULL && i < step; i++)
        {
            prev++;
            current = current->next;
        }
        printf("Value checked at index [%lu] = [%d]\n", prev, next->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
    while (next != NULL && next->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev, next->n);
        next = next->next;
        prev++;
    }

    if (next != NULL && next->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev, next->n);
        return (next);
    }

    return (NULL);
}

