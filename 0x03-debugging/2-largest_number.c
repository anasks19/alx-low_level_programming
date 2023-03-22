#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number.
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b)
{
if (a > c)
largest = a;
else
largest = c;
}

else if (b > a)
{
if (b > c)
largest = b;
else
largest = c;
}

else if (a > c)
largest = a;
else
largest = c;

return (largest);
}
