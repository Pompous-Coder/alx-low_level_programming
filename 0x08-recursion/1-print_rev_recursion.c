#include "main.h"
/**
 * _print_rev__recursion- Self explanatory function
 * @s: pointer
 * Description: Describe function
 * Return: REturn value
 */
void _print_rev__recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
