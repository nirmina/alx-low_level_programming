#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - a function that gets a length of string
 * @s: the string to get the length
 * Return: length of @str
 */
int _strlen(char *s)
{
int len = 0;
while (*s)
len++;
return (len);
}
/**
 * _strcopy - a function that returns a @dest with a copy of a string form @src
 * @src: string to copy
 * @dest: copy string to here
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: the dogs owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

