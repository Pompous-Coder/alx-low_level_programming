#include "main.h"
/**
 * _print_rev_rcursion- Self explanatory function
 * @s: pointer
 * Description: Describe function
 * Return: REturn value
 */
void _print_rev__recursion(char *s)
{	if (*s == '\n')
	{	_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(*(--s));
}
