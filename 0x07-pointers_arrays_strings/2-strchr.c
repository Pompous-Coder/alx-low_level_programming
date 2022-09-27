#include "main.h"
/**
 * _strchr-  Self explanatory function
 * @s: parameter
 * @c: parameter
 * 
 * Description: performing task
 * Return: return results
 */
char *_strchr(char *s, char c)
{	char findMe = 'c';
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{	if (s[i] == 'c')
			return (&s[i]);
	}
	return (NULL);
}
