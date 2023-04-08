#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count = 1;
int sum = 0;

if (*argv[count] >= 48 && *argv[count] <= 57 && argc > 2) 
{
while (count < argc)
{
if ((*argv[count] >= 33 && *argv[count] <= 47) || (*argv[count] >= 97 && 
*argv[count] <= 122) || (*argv[count] >= 65 && *argv[count] <= 90))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}
