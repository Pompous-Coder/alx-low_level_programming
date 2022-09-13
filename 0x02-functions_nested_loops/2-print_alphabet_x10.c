#include "main.h"
/**
 * print_alphabet- Self explanatory function
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);

	_putchar('\n');
}
