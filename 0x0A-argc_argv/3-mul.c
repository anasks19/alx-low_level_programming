#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Multiplication if argc > 1, otherwise -1 (Error),
 */

int main(int argc, char *argv[])
{
int count;
int mul = 1;

for (count = 1; count < argc; count++)
{
if (argc > 1)
{
mul *= atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", mul);
return (0);
}
