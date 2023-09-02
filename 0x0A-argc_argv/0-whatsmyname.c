#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints its name
 * @argc: number of agrguments
 * @argv: arrays of arguments
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
