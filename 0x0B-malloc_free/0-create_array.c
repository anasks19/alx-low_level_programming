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

if (size == 0)
return (NULL);

str = malloc(sizeof(char) * size);

if (str == NULL)
return (NULL);

while (i < size)
{
str[i] = c;
i++;
}

return (str);
}
