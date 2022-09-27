#include "main.h"
/**
 * _strspn-  Self explanatory function
 * @s: parameter
 * @accept: parameter
 *
 * Description: performing task
 * Return: return results
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int i, j;
	unsigned int c;

	for (i = 0; s[i] != '0'; i++)
	{	for (j = 0; accept[j] != '\0'; j++)
		{	if (s[i] == accept[j])
			{	c++;
				break;
			}
		}
		if (s[i] != accept[j])
		{	break;
		}
	}
	return (c);
}
