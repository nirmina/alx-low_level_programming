#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - détermine si un nombre aléatoire est positif, négatif ou nul
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
return (0);
}
