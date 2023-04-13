#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: Pointer to the allocated memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

/* set the memory to zero */
_memset(ptr, 0, nmemb * size);

return (ptr);
}
