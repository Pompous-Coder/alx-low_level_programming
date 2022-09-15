#include "main.h"
/**
 * print_most_numbers- Self explanatory function
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	_putchar('\n');
}
