#include "dog.h"

char *_strcpy(char *dest, char *src);

/**
 * ney_dog: creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Return: New data of structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);

	(*mydog).name = name;
	(*mydog).age = age;
	(*mydog).owner = owner;

	name = malloc(sizeof(name) + 1);
	owner = malloc(sizeof(owner) + 1);

	if (name == NULL || owner == NULL)
		return (NULL);

	_strcpy(name, (*mydog).name);
	_strcpy(owner, (*mydog).owner);

	return (mydog);

}


/**
 * _strcpy - copies the string
 * @dest: Destiny
 * @src: source
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

