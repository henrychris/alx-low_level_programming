#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* allocate memory for name and owner*/
	new_name = malloc(sizeof(char) * strlen(name) + 1);
	if (new_name == NULL)
		return (NULL);
	new_owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	/* copy name and owner to new memory*/
	strcpy(new_name, name);
	strcpy(new_owner, owner);

	/* allocate memory for doggo*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
