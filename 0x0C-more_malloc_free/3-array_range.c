#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range- Self explanatory function
 * @min: var
 * @max: var
 *
 * Description: soem stuff
 * Return: Always 0 if success
 */
int *array_range(int min, int max)
{	int myarray;
	int val, i;
	int *p;

	if (min > max)
		return (NULL);
	myarray = (max - min) + 1;
	p = malloc(sizeof(int) * myarray);
	if (p == NULL)
		return (NULL);
	for (i = 0, val = min; i < myarray; i++, val++)
		p[i] = val;
	return (p);
}
