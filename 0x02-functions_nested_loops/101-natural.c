#include "main.h"
/**
 * main - Entry code
 * description: he sum of all the multiples of 3 or 5 belowed 1023
 * Return: 0 (success)
 */
int main(void)
{
int sum;
int num;
for (num = 0; num < 1024; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
sum += num;
}
printf("%d\n", sum);
return (0);
}
