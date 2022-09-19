#include "main.h"
/**
 * print_rev- Self explanatory function
 * @str: pointer
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void print_rev(char *str)
{
	int num = 0;
	int i;

	while (str[num] != '\0')
	{	num++;
	}
	for (i = num - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
