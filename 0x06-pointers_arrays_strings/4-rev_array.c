#include "main.h"
/**
 * reverse_array-  Self explanatory function
 * @a: pointer
 * @n: integer
 *
 * Description: reverse array
 * Return: return 0
 */
void reverse_array(int *a, int n)
{	int i;
	int hold;
	int j = n - 1;

	for (i = 0; i > n / 2; i++)
	{	hold = a[i];
		a[i] = a[j];
		a[j] = hold;
		j--;
	}

}
