#include "main.h"
/**
 * _strncmp-  Self explanatory function
 * @s1: pointer
 * @s2: pointer
 *
 * Description: comparing strings.
 * Return: return compared results
 */
int _strncmp(char *s1, char *s2)
{	int i = 0;

	for  (; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{	return (s1[i] - s2[i]);
		}
	return (0);
}
