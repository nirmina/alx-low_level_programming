#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: variable
 * Return: void
 */

void print_triangle(int size)
{
int row, hache, space;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (space = size - row; space >= 1; space--)
{
_putchar(' ');
}
for (hache = 1; hache <= row; hache++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
