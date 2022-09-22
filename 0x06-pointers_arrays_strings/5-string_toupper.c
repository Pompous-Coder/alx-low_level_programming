#include "main.h"
/**
 * string_toupper-  Self explanatory function
 * @c: pointer
 * Description: reverse array
 * Return: return char
 */
char *string_toupper(char *c)
{	int i;
	while (c[i] != '\0')
		if (c[i] >= 'a' && c[i] <= 'z')
		{	c[i] = c[i] - 32;
		}
		i++;
	return (c);
}
