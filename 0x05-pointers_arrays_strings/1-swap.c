#include "main.h"
/**
 * swap_int- Self explanatory function
 * @a:pointer
 * @b:pointer
 *
 * Description: Printing numbers 0-14.
 * Return: Always 0 if success
 */
void swap_int(int *a, int *b)
{	int c;

	c = *a;
	*a = *b;
	*b = c;

}
