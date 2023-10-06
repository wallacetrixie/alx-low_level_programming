#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints alphabetical letters in lowercase then in caps
 * Return: Always a (success)
 */

int main(void)

{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (lower = 'A'; lower <= 'Z'; lower++)
putchar(lower);
putchar('\n');
return (0);
}
