#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if the string contains only digits.
 * @str: The character array to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count])) /* Check if str contains digits */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the sum of numbers or reports an error.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* Iterate through the whole array of arguments */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* Convert the string to an integer */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n"); /* Report an error ifthat are not digits */
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* Print the sum */

	return (0);
}

