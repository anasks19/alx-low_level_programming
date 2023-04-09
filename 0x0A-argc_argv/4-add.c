#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
int count = 1;
int sum = 0;
int i = 0;

if (argc > 1)
{
while (count < argc)
{
if (atoi(argv[count]) < 0 || (!isdigit(argv[count][i]) && argv[count][i] != 0))
{
printf("Error\n");
i++;
return (1);
}
else
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}
