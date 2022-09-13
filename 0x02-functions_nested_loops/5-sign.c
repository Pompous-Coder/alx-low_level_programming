#include "main.h"
/**
 * print_sign- Self explanatory function
 * @n:tch
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
int print_sign(int n)
{	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{	
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
