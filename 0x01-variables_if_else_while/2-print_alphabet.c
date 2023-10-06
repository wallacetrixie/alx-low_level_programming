#include <stdio.h>

/**
 * main - a program that prints alphabetical letters in lowercase
 * Return: Always a (success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);

}
