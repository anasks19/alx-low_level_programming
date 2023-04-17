#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}

owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
if (owner_copy == NULL)
{
free(new_dog);
free(name_copy);
return (NULL);
}

_strcpy(name_copy, name);
_strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i]; i++)
;
return (i);
}

/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer to copy to
 * @src: the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

