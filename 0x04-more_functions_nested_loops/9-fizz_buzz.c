#include "main.h"
#include <stdio.h>

/**
 * main - checking the code.
 * Description: prints the numbers 1 to 100
 * fizz for multiples for 3 , buzz for multiple of 5
 * and fizzbuzz fo multiples of both
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
