#include "main.h"
/**
 * _strlen- Self explanatory function
 * @s:pointer
 * Description: Printing numbers 0-14.
 * Return: Always 0 if success
 */
int _strlen(char *s)
{	int i;
	i = 0;
	while (s[i] != '\0')
	{	i++;
	}

	return (i);
}
