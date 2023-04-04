#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes where the prefix is located in 's'.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j = 0;
unsigned int size;

while (s[i] != accept[j])
{
for (i = 0; s[i] != 0; i++)
{
if (s[i] == accept[j])
break;
i++;
}
}
size = i + 1;
return (size);
}
