#include "main.h"
/**
 * print_alphabet- Self explanatory function
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
void print_alphabet(void)
{
	char str;
	int val;

	for( val=0; val<=9; val++)
	{	for (str = 'a'; str <= 'z'; str++)
			_putchar(str);

		_putchar('\n');
	}
}
