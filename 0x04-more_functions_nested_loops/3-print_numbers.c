#include "main.h"

/**
 * print_numbers - print numbers form 0 to 9 followed by new line
 * @num: numbers to be print
 * Return: void
 */

void print_numbers(void)
{
int num;

num = 0;
while (num <= 9)
{
_putchar(num + '0');
num++;
}
_putchar('\n');
}
