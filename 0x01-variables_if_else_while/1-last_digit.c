#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main -a program that checks the current state of last digit
 * Return: Always (success)
 *
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, last);
	}
	return (0);

}
