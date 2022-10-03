#include "main.h"
/**
 * _strncat-  Self explanatory function
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *_strncat(char *dest, char *src, int n)
{	int sl = 0;
	int dl = 0;
	int i;

	while (dest[dl] != '\0')
	{	dl++;
	}
	while (src[sl] != '\0')
	{	sl++;
	}
	for (i = 0; i < n;  i++)
	{	dest[dl] = src[i];
		dl++;
	}
	if (sl < n)
	{	dest[n] = '\0';
	}
	return ((char *)dest);
}

