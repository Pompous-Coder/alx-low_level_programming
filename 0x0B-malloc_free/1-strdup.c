#include "main.h"
#include <stdlib.h>
/**
 * _strdup- Self explanatory function
 * @str: var
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
char *_strdup(char *str)
{	char *holdCopy, *strB, *firstIndex; 
	int i = 0;

	if (str == NULL)
		return (NULL);
	strB = str;
	while (*(str + i))
		i++;
	holdCopy = malloc(sizeof(*str) * (i + 1));
	if (holdCopy == NULL)
		return (NULL);
	firstIndex = holdCopy;
	while (*strB)
	{	*holdCopy = *strB;
		strB++;
		holdCopy++;
	}
	*holdCopy = '\0';
	return (firstIndex);
}
