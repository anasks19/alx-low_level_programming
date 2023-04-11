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
int i, j, pos = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* calculate total length of arguments */
for (i = 0; i < ac; i++)
len += strlen(av[i]);

/* allocate memory for concatenated string and newline characters */
str = malloc(sizeof(char) * (len + ac + 1));
if (str == NULL)
return (NULL);

/* concatenate arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[pos] = av[i][j];
pos++;
}
str[pos] = '\n';
pos++;
}
str[pos] = '\0';
return (str);
}
