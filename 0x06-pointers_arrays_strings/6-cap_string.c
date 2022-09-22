#include "main.h"
/**
 * cap_string- Self explanatory function
 * @c: pointer
 * Description: reverse array
 * Return: return char
 */
char *cap_string(char *c)
{
	int i;

	if (c[0] >= 97 && c[0] <= 122)
	{
		c[0] = c[0] - 32;
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		switch (c[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (c);
}
