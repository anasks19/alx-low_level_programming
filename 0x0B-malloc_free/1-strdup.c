#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{

if (str == NULL)
return (NULL);

char *ptr = malloc(strlen(str) + 1);
if (ptr == NULL)
return (NULL);

strcpy(ptr, str);
return (ptr);
}
