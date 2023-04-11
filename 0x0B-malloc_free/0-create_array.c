#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: character to initializes
 *
 * Return: pointer to the array, NULL if size == 0 or NULL if the pointer fail
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;

str = malloc(sizeof(c) * size);

while (i < (sizeof(c) * size))
{
str[i] = c;
i++;
}

if (size == 0)
{
return (NULL);
}

if (!str)
return (NULL);

return (str);
}
