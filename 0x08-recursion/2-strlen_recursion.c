#include "main.h"
/**
 * _strlen_recursion- Self explanatory function
 * @s: pointer
 * Description: Describe function
 * Return: REturn value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{	return (0);
	}	
	return (1 + _strlen_recursion(s + 1));
}
