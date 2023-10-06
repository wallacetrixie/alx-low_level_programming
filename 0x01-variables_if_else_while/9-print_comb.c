#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - a program that prints numbers
 * Return: Always a (success)
 *
 */

int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
