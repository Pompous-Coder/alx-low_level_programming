#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry function
 * Return: Always 0 if success
 */
int main(void)
{
	int n;
	char const_Str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("%s %d is %d and is greater than 5\n", const_Str, , n % 10);
	}
	else if ((n % 10) ==  0)
	{
		printf("%s %d is %d and is 0\n", const_Str, n, n % 10);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", const_Str, n, n % 10);
	}

	return (0);
}
