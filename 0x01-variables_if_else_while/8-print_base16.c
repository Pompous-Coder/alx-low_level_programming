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
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
