#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat- Self explanatory function
 * @s1: var
 * @s2: var
 * @n: var
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char *p;
	unsigned int j = 0;
	unsigned int length =  n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		length++;
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{	p[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{	p[j] = s2[i];
		j++;
	}
	p[j] = '\0';
	return (p);

}
