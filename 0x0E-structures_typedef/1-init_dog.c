#include <stdlib.h>
#include "dog.h"
/**
 * init_dog- a function that initialize a variable of type struct dog
 * @d: pointer used for initilization
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
