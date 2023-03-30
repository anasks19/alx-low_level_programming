#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: appended string
 * @src: string to add to the first string
 *
 * Return: concatenate string
 */

char *_strcat(char *dest, char *src)
{
int str1;
int str2;

str1 = 0;
str2 =  0;

while (dest[str1] != 0)
str1++;


while (src[str2] != 0)
{
dest[str1] = src[str2];
str1++;
str2++;
}
dest[str1] = '\0';

return (dest);
}
