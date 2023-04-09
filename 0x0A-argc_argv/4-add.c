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
i = 0;
if (atoi(argv[count]) < 0 || !isdigit(argv[count][i]))
{
printf("Error\n");
return (1);
}
while (argv[count][i] != '\0')
{
if (!isdigit(argv[count][i]))
{
printf("Error\n");
return (1);
}
i++;
}
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
