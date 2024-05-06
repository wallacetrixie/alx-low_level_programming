#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The lowest index to search in.
 * @high: The highest index to search in.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value is not present
 *         in the array within the specified range.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    while (low <= high)
    {
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value is not present
 *         in the array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, min;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min = (bound / 2 < size - 1) ? bound / 2 : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);
    return (binary_search(array, bound / 2, min, value));
}

