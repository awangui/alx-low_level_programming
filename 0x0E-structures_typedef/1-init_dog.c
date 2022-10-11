#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialzes a variale of type struct dog
 * @d: pointer
 * @name: name to initialize
 * @age: `` ```
 * @owner: ``
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
