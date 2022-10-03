#include "main.h"
#include <stdlib.h>
/**
 * str_concat- Self explanatory function
 * @s1: var
 * @s2: var
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *str_concat(char *s1, char *s2)
{	int lengthA = 0, lengthB = 0;
	char *pointOne, *indexer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 =  "";
	while (*(s1 + lengthA))
		lengthA++;
	while (*(s2 + lengthB))
		lengthB++;
	pointOne  = malloc(sizeof(*s1) * (lengthA + lengthB + 1));
	if (pointOne == NULL)
		return (NULL);
	indexer = pointOne;
	while (*s1)
	{	*pointOne = *s1;
		pointOne++;
		s1++;
	}
	while (*s2)
	{	*pointOne = *s2;
		pointOne++;
		s2++;
	}
	*pointOne = '\0';
	return (indexer);
}
