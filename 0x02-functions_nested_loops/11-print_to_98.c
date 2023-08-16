#include "main.h"
/**
 * print_to_98 -print n to 98 in order
 * @n: input int
 */
void print_to_98(int n)
{
int c;
if (n > 98)
for (c = n; c > 98; c--)
printf("%d, ", c);
for (c = n; c < 98; c++)
printf("%d, ", c);
printf("98\n");
}
