#include<stdio.h>

#include<time.h>

#include<stdlib.h>

/**
 *main -A  programm that ckecks whether a number is positive or negative
 *Return: 1 (success)
 */

int main(void)

{

int n;

srand(time(0));
n = rand() % 90 + 10;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);

}
