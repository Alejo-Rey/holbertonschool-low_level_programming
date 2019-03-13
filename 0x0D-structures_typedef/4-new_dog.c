#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - allocate a pointer in other
 * @str:the pointer to allocate
 * Return: return the new pointer
 */
char *_strdup(char *str)
{
	int count, count2;
	char *x;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
	{}
	count++;
	x = malloc(sizeof(char) * count);
	if (x == NULL)
		return (NULL);
	for (count2 = 0; str[count2]; count2++)
		x[count2] = str[count2];
	return (x);
}

/**
 * new_dog - creating a new struture of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: New_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *New_dog;	/*char *newName, *newOwner;*/

	New_dog = malloc(sizeof(dog_t));
	if (New_dog == NULL)
	{
		free(New_dog);
		return (NULL);
	}

	New_dog->name = _strdup(name);
	New_dog->owner = _strdup(owner);
	New_dog->age = age;

	return (New_dog);
}
