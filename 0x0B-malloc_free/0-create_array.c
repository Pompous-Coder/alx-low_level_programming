#include "main.h"
#include <stdlib.h>
/**
 * create_array- Self explanatory function
 * @size: var
 * @c: var
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char  *create_array(unsigned int size, char c)
{	char *point;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	if (size > 0)
		point = malloc(size * sizeof(char));
	if (point == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{	*(point + i) = c;
	}
	return (point);
}
