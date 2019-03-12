#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function to print a structur
 * @d: dog vvariable
 * Return: ()
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL && (*d).owner != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	else if ((*d).name == NULL && (*d).owner == NULL)
		printf("Name: %p\nAge: %f\nOwner: %p\n", (*d).name, (*d).age, (*d).owner);
	else if ((*d).name == NULL)
		printf("Name: (nil)");
	else if ((*d).owner == NULL)
		printf("(nil)");
}
