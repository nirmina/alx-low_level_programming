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
{
printf("Le nombre %d est positif\n", n);
}
else if (n == 0)
{
printf("%d est nul\n", n);
}
else
}
printf("%d est négatif\n", n);
}
return (0);
}
