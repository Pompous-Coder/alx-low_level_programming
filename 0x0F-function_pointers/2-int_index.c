#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index- Self explanatory function
 * @array: pointer
 * @size: pointer
 * @cmp:poointer
 *
 * Description: meh
 * Return: meh
 */
int int_index(int *array, int size, int (*cmp)(int))
{	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{	if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
