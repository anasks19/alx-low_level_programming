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
int i = 0;
int j = 0;
unsigned int size = 0;

while (s[i])
{
while (accept[j])
{
if (s[i] == accept[j])
{
size++;
j = 0;
i++;
}
else
j++;
}
break;
}
return (size);
}
