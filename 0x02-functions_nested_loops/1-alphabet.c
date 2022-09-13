#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry function
 * Return: Always 0 if success
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);

	_putchar('\n');

	return;
}
