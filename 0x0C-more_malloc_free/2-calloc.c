#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc- Self explanatory function
 * @nmemb: var
 * @size: var
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{	unsigned int i;
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= nmemb; i++)
		p[i] = 0;
}
