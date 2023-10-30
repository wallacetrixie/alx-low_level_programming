#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size `size` and assigns char `c`
 * @size: The size of the array
 * @c: The character to assign
 *
 * Description: Creates an arra each element.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

