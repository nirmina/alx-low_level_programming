#include "main.h"
/**
 * _islower - check if the character is lowercase
 *  @c: checks input of function
 *  Return: 1 if 'c' is lowercase however always 0 (success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
