#include <stdio.h>
/**
 * main-  Self explanatory function
 * @argc: parameter
 * @argv: parameter
 *
 * Description: performing task
 * Return: return results
 */
int main(int argc, char *argv[]__attribute__((unused)))
{	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
