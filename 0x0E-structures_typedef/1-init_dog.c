#include "dog.h"
#include <stdlib.h>

<<<<<<< HEAD
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to an element of type dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 *
 * Return: nothing
 */
=======
>>>>>>> a4b70b4c9c736530e6f0723d9bbc327455655a65

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
