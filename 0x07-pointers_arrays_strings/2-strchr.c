#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locate a character in a string
 * @s: pointer that point to the string target
 * @c: character to locate
 *
 * Return: first occurence of 'c' in the string 's', otherwise NULL.
 */

char *_strchr(char *s, char c)
{
int count = 0;

while (s[count] != '\0')
{
if (s[count] == c)
{
break;
}
count++;
}
return (s + count);
}
