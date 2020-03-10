#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);

	(*mydog).name = name;
	(*mydog).age = age;
	(*mydog).owner = owner;

	return (mydog);

}

