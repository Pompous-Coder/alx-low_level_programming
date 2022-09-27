#include "main.h"
/**
 * _memcpy-  Self explanatory function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Description: performing task
 * Return: return results
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
