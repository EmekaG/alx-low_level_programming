#include "dog.h"
#include <stdlib.h>

int str_len(char *s);
char *str_cpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * str_len - finds the length of a string
 * @s: the string to be checked.
 *
 * Return: the string length
 */
int str_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * str_cpy - copies a string
 * @dest: the destination of the copied string
 * @src: the source string
 *
 * Return: the pointer to @dest
 */
char *str_cpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	(*my_dog).name = malloc(sizeof(char) * (str_len(name) + 1));
	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	(*my_dog).owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if ((*my_dog).owner == NULL)
	{
		free((*my_dog).name);
		free(my_dog);
		return (NULL);
	}

	(*my_dog).name = str_cpy((*my_dog).name, name);
	(*my_dog).age = age;
	(*my_dog).owner = str_cpy((*my_dog).owner, owner);

	return (my_dog);
}
