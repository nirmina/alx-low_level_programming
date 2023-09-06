#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: grid of memory
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
