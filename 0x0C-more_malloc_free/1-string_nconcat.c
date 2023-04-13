#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 *
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes to be concatenated from s2.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if the allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);

strncpy(concat, s1, len1);
strncat(concat , s2, n);
concat[len1 + n] = '\0';

return (concat);
}
