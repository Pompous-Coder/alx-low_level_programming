#include "main.h"
/**
 * puts2- Self explanatory function
 * @str: pointer
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num = num + 2)
		_putchar(str[num]);
	_putchar('\n');
}
