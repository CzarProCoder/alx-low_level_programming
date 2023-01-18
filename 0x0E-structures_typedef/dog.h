#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Struct with elements
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
