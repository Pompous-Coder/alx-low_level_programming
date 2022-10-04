#include <stdio.h>
#include <stdlib.h>
/**
 * main-  Self explanatory function
 * @argc: parameter
 * @argv: parameter
 *
 * Description: performing task
 * Return: return results
 */
int main(int argc, char *argv[])
{	int i;
	int res = 1;
	
	if (argc == 3)
	{	for (i = 1; i < argc; i++)
		{	res *= atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
	else 
	{	printf("Error\n");
		return (1);
	}
}
