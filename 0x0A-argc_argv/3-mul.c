#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero (Success).
 */

int main(int argc, char *argv[])
{
int count;
int mul = 1;

if (argc > 2)
{
for (count = 1; count < argc; count++)
{
mul *= atoi(argv[count]);
}
printf("%d\n", mul);
}
else if (argc <= 2)
{
printf("Error\n");
return (1);
}
return (0);
}
