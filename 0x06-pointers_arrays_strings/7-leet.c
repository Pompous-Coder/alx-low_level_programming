#include "main.h"
/**
 * leet- Self explanatory function
 * @c: pointer
 * Description: reverse array
 * Return: return char
 */
char *leet(char *c)
{
	int i, j;
	char *a, *b;

	i = 0;
	a = "aeotlAEOTL";
	b = "4307143071";

	while (c[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
		}
		i++;
	}
	return (c);
}
