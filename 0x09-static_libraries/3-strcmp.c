#include "main.h"

/**
 * _strcmp - Compares string values
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: The difference between the first differing characters in s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

