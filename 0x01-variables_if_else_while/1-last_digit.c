#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
x = n % 10;

if (x > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, x);
else if (x == 0)
printf("Last digit of %d is %d and is 0\n", n, x);
else if (x < 6)
printf("Last digit of %d is %d and is less than 6 not 0\n", n, x);

return (0);
}
