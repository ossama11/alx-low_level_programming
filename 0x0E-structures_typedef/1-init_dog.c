#include "dog.h"

/**
* init_dog - Initializes a struct dog.
* @d: Pointer to a struct dog.
* @name: Pointer to the dog's name.
* @age: The age of the dog as a floating-point number.
* @owner: Pointer to the owner's name.
*
* Description: This function initializes a struct dog with the provided
* name, age, and owner information.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
