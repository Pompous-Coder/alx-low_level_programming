#include "main.h"
/**
 * _memset-  Self explanatory function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Description: performing task
 * Return: return results
 */
char *_memset(char *s, char b, unsigned int n);
{	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
				
	return (s);
}
