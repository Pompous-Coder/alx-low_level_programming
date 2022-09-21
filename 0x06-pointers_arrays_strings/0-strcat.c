#include "main.h"
/**
 * _strcat-  Self explanatory function
 * @dest: pointer
 * @src: pointer
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *_strcat(char *dest, char *src)
{	int sl = 0;
	int dl = 0;
	int i;

	while (dest[dl] != '\0')
	{	dl++;
	}
	while (src[sl] != '\0')
	{	sl++;
	}
	for (i = 0; i < sl;  i++)
	{	dest[dl] = src[i];
		dl++;
	}
	return ((char *)dest);
}

