#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to s1, followed by s2 and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
int len1;
int len2;
char *concat;

if (s1 != NULL)
len1 = strlen(s1);

if (s2 != NULL)
len2 = strlen(s2);

concat = malloc(len1 + len2 + 1);
if (concat == NULL)
return (NULL);

if (s1 != NULL)
memcpy(concat, s1, len1);
if (s2 != NULL)
memcpy(concat + len1, s2, len2);

concat[len1 + len2] = '\0';
return (concat);
}
