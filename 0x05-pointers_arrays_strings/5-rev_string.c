#include "main.h"
/**
 * rev_string-  Self explanatory function
 * @s: pointer
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void rev_string(char *s)
{	char reversed_word[2000];
	int num = 0;
	int j = 0;
	int i;

	while (s[num] != '\0')
	{	num++;
	}
	for (i = num - 1; i >= 0; i--)
	{	reversed_word[j] = s[i];
		j++;
	}
	for (i = 0; i <= j - 1; i++)
		s[i] = reversed_word[i];
}

