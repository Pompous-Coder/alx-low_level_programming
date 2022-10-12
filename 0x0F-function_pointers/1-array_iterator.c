#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator- execute a function on arrays
 *@array: array 
 *@size: size 
 *@action: pointer to function 
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
	{	for (i = 0; i < size; i++)
			action(array[i]);
	}
}

