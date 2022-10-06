#include <stdlib.h>
/**
 * malloc_checked- Self explanatory function
 * @b: var
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void *malloc_checked(unsigned int b)
{	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
