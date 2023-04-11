#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: pointer to 2D array or NULL.
 */
int **alloc_grid(int width, int height)
{
int a = 0;
int b = 0;
int **matrix;

if (width <= 0 || height <= 0)
return (NULL);

matrix = malloc(sizeof(int *) * height);
if (matrix == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
matrix[a] = malloc(sizeof(int) * width);
if (matrix[a] == NULL)
{
while (--a >= 0)
free(matrix[a]);
free(matrix);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
matrix[a][b] = 0;
}
}
return (matrix);
}
