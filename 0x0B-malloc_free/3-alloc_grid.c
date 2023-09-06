#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @height: int input
 * @width: int input
 * Return: NULL on failure or If width or height is 0 or negative return NULL
 */
int **alloc_grid(int width, int height)
{
int **s;
int x;
int y;
s = malloc(sizeof(*s) * height);
if (width <= 0 || height <= 0 || s == 0)
{
return (NULL);
}
else
{
for (x = 0; x < height; x++)
{
s[x] = malloc(sizeof(**s) * width);
if (s[x] == NULL)
{
while (x--)
free(s[x]);
free(s);
return (NULL);
}
for (y = 0; y < width; y++)
s[x][y] = 0;
}
}
return (s);
}
