#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if the string contains only digits
 * @str: array str
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count;

    count = 0;
    while (count < strlen(str))
    {
        if (!isdigit(str[count])) /* check if str there are digit */
        {
            return (0);
        }
        count++;
    }
    return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc) /* Goes through the whole array */
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
            sum += str_to_int;
        }
        else
        {
            printf("Error\n"); /* Condition if one of the number contains symbols that are not digits */
            return (1);
        }
        count++;
    }

    printf("%d\n", sum); /* print sum */

    return (0);
}

