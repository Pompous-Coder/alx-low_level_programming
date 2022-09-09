#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry function
 * Return: Shouldalways 0 if success
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		if(str == 'e' || str == 'q')
			continue;
		putchar(str);
	putchar('\n');

	return (0);
}
