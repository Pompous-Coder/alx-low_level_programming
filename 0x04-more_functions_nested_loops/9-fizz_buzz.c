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
	char div3;
	char div5;

	printf("1");

	for (n = 2; n <= 100; n++)
	{
		div3 = n % 3;
		div5 = n % 5;

		if (div3 == 0 && div5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (div3 == 0 && div5 != 0)
		{
			printf(" Fizz");
		}
		else if (div3 != 0 && div5 == 0)
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
