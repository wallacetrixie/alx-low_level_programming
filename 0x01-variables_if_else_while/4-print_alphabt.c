#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - a program that prints alphabetical letters in lowercase
 * Return: Always a (success)
 */

int main(void)
{
char lower, e, q;
e = 'e';
q = 'q';
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != e && lower != q)
putchar(lower);
}
putchar('\n');
return (0);
}
