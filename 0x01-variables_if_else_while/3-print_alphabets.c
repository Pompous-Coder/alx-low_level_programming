#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry function
 * Return: Always 0 if success
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		putchar(str);

	for (str = 'A'; str <= 'Z'; str++)
		putchar(str);

	putchar('\n');

	return (0);
}
