#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array within the specified range.
 * @array: A pointer to the first element of the array.
 * @start: The start index of the array to print.
 * @end: The end index of the array to print.
 */
void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of integers
 *                             using the advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The lowest index to search in.
 * @high: The highest index to search in.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value is not present
 *         in the array within the specified range.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (low <= high)
    {
        mid = (low + high) / 2;
        print_array(array, low, high);
        if (array[mid] == value)
        {
            if (mid == low || array[mid - 1] != value)
                return (mid);
            return (advanced_binary_recursive(array, low, mid, value));
        }
        else if (array[mid] < value)
            return (advanced_binary_recursive(array, mid + 1, high, value));
        else
            return (advanced_binary_recursive(array, low, mid - 1, value));
    }
    return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if the value is not present
 *         in the array or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);
    return (advanced_binary_recursive(array, 0, size - 1, value));
}

