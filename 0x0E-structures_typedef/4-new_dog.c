#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *cute_dog;
int name_1 = 0, own_1 = 0;

if (name != NULL && owner != NULL)
{
name_1 = _strlen(name) + 1;
own_1 = _strlen(owner) + 1;
cute_dog = malloc(sizeof(dog_t));

if (cute_dog == NULL)
return (NULL);


cute_dog->name = malloc(sizeof(char) * name_1);

if (cute_dog->name == NULL)
{
free(cute_dog);
return (NULL);
}

cute_dog->owner = malloc(sizeof(char) * own_1);

if (cute_dog->owner == NULL)
{
free(cute_dog->name);
free(cute_dog);
return (NULL);
}

cute_dog->name = _strcpy(cute_dog->name, name);
cute_dog->owner = _strcpy(cute_dog->owner, owner);
cute_dog->age = age;
}
return (cute_dog);
}

/**
 * _strlen - return the length of a string
 * @s: String
 *
 * Return: string length
*/
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}

/**
 * _strcpy - copy the string
 * @dest: Destination
 * @src: source
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}













