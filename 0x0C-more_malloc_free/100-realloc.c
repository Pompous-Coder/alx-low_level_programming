#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc- Self explanatory function
 * @ptr: var
 * @old_size: var
 * @new_size: var
 *
 * Description: soem stuff
 * Return: Always 0 if success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{	char *first, *second;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{	ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{	free(ptr);		
		return (NULL);
	}
	first = malloc(new_size);
	second = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		first[i] = second[i];
	free(ptr);
	return(first);
}
