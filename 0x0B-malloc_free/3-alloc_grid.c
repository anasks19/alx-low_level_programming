#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of intgers
 * @width: columns
 * @height: rows
 *
 * Return: NULL.
 */

int **alloc_grid(int width, int height)
{
int a = 0;
int b = 0;
int **matrix;

if (width <= 0 || height <= 0)
return (NULL);

matrix = (int **)malloc(size of (int *) * height);
if (matrix == NULL)
return (NULL);

while (a < height)
{
matrix[a] = (int *)malloc(sizeof(int) * width);
if (matrix[a] == NULL)
{
while (b < a)
{
free(matrix[b]);
b++;
}
free(matrix);
return (NULL);
}
for (b = 0; b < width; b++)
grid[a][b] = 0;
a++;
}

return (matrix);
}
