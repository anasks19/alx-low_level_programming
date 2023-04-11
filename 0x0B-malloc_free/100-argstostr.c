#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the argument vector
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int total_length = 0,
int pos = 0,
int len;
char *result;

if (ac == 0 || av == NULL)
return (NULL);

for (int i = 0; i < ac; i++)
{
len = strlen(av[i]);
while (*av[i] == ' ' || *av[i] == '\t')
{
av[i]++;
len--;
}
total_length += len + 1;
}

result = malloc((total_length)*sizeof(char));
if (result == NULL)
return (NULL);

for (int i = 0; i < ac; i++)
{
len = strlen(av[i]);
while (*av[i] == ' ' || *av[i] == '\t')
{
av[i]++;
len--;
}
memcpy(result + pos, av[i], len);
pos += len;
result[pos++] = '\n';
}

result[pos] = '\0';

return (result);
}
