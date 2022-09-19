#include "main.h"
/**
 * _puts- Self explanatory function
 * @str: pointer
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
		_putchar(str[num]);
	_putchar('\n');
}
