#include "main.h"
/**
 * _strncpy-  Self explanatory function
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *_strncpy(char *dest, char *src, int n)
{	int sl = 0;
	int dl = 0;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{	dest[i] = src[i];
	}
	while (i < n)
	{	dest[i] = '\0';
		i++;	
	}
	return (dest);
}

