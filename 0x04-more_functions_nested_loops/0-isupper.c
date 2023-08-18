#include "main.h"
/**
 * _isupper - a function that checks for uppercace character
 * @c: the character
 * Return: 1 (uppercase) 0 (otherwise)
 */
int _isupper(int c)
{
if (c > 64 && c <= 90)
{
return (1);
}
return (0);
}
