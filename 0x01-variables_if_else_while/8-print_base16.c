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
char low;
for (d = '0'; d <= '9'; d++)
putchar(d);

for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');

return (0);
}


