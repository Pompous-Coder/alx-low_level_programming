#include "main.h"
/**
 * main- Self explanatory function
 *
 * Description: desc.
 * Return: Always 0 if success
 */

int main(void)
{
	char n;
	char firstCon;
	char secCon;

	printf("1");

	for (n = 2; n <= 100; n++)
	{
		firstCon = n % 3;
		secCon = n % 5;

		if (firstCon == 0 && secCon == 0)
		{
			printf(" FizzBuzz");
		}
		else if (firstCon == 0 && secCon != 0)
		{
			printf(" Fizz");
		}
		else if (firstCon != 0 && secCon == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
