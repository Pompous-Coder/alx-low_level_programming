#include "dog.h"
#include <stdlib.h>
/**
 * _strlen- desc
 * @s: var
 * Rturn: len of str
 */
int _strlen(char *s)
{	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	i++;
	return (i);
}
/**
 * new_strcpy- copy strin g
 * @dest: new
 * @src: str to copy
 *
 * Return: pointer
 */
char *new_strcpy(char *dest, char *src)
{	int i;

	for(i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * new_dog- new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;
	unsigned int nlen;
	unsigned int olen; 

	nlen = _strlen(name);
	olen = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	adog = malloc(sizeof(dog_t));
	if (adog == NULL)
	{
		return (NULL);
	}
	if (adog != NULL)
	{
		adog->name = malloc(nlen);
		if (adog->name == NULL)
		{
			return (NULL);
		}
		if (adog->name != NULL)
		{
			adog->owner = malloc(olen);
			if (adog->owner == NULL)
			{
				return (NULL);
			}
			if (adog->owner != NULL)
			{
				adog->age = age;
				new_strcpy(adog->name, name);
				new_strcpy(adog->owner, owner);
			}
		}
	}
	return (adog);
}
