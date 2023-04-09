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
int i;

if (argc > 2)
{
while (count < argc)
{
i = 0;
if (atoi(argv[count]) < 0 || !isdigit(argv[count][i]))
{
printf("Error\n");
return (1);
}
i++;
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
}
else if (argc == 1)
{
printf("0\n");
}
return (0);
}
