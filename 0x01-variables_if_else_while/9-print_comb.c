#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry function
 * Return: Always 0 if success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
