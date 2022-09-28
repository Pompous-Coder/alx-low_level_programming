#include "main.h"
/**
 * _puts_recursion- Self explanatory function
 * @s: pointer
 * Description: Describe function
 * Return: REturn value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
