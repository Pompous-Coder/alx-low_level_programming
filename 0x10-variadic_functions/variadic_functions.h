#ifndef _VAR_FUN_H
#define _VAR_FUN_H
#include <stdarg.h>
/**
 * struct print_convert_variable - structurE
 * @type: VAR
 * @f: pointer to function 
 *
 * Description: some text
 */
typedef struct print_convert_variable
{
	char type;
	void (*f)(va_list *);
} conv_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int);
#endif /* _VAR_FUN_H */






