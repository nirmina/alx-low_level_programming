#include "main.h"
/**
 * times_table - prints the times table of 9
 * example table: 0 0 0 0; 0 1 2 3...
 */
void times_table(void)
{
int num;
int mul;
int prod;
for (num = 0; num <= 9; num++)
{
_putchar(48);
for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
prod = mul * num;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
