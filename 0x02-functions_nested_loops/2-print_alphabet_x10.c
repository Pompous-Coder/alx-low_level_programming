#include "main.h"
/**
 * print_alphabet- Self explanatory function
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
void print_alphabet_x10(void)
{
	char str;
	int cou;

	for (cou = 0; cou <= 9; cou++)

	{	for(str = 'a'; str <= 'z'; str++)
		{	_putchar(str);
		}

		_putchar('\n');
	}
}
