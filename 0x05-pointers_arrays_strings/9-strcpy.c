#include "main.h"
/**
 * _strcpy- Self explanatory function
 * @dest: pointer
 * @src:num of times
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *_strcpy(char *dest, char *src)
{
	int num;
	int j = 0;

	while (src[j] != '\0')
	{	j++;
	}
	for (num = 0; num < j; num++)
	{	dest[num] = src[num];
	}
	dest[j] = '\0';
	return ((char *)dest);
}
