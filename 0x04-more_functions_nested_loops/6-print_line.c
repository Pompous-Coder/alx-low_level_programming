#include "main.h"
/**
 * print_line- Self explanatory function
 * Description: desc.
 * Return: Always 0 if success
 */
void print_line(int n)
{
	int low  = 0;

	while (low < n)
	{
		if (n > 0)
		{
			_putchar('_');
			low++;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');

}
