#include "main.h"
/**
 * print_diagonal- Self explanatory function
 * @n: val
 * Description: desc.
 * Return: Always 0 if success
 */

void print_diagonal(int n)
{   if(n>0)
    {
        for (int i = n; i > 0; i--)
        {
            int spaces = n-i;
            int k=0;
            if (i == n)
            {
                _putchar('\\');
		_putchar('\n');
                continue;
            }
            
            while(!(k>=spaces))
            {
                _putchar(' ');
                k++;
                
            }
            _putchar('\\');
 	    _putchar('n');
        }
    }
    else{
        _putchar('\n');
    }
 
}
