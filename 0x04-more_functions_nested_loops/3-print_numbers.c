#include "main.h"
/**
 * print_numbers- Self explanatory function
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void print_numbers(void)
{
	int  num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');

	_putchar('\n');
}
