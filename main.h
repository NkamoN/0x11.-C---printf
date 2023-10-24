#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <stdarg.h>
#incude <stdlib.h>
#include <limits.h>

#define BUFFER_SIZE 1024


/**
* Structure Format: match conversion specifiers
* @fmt: format
* @f: Function associated
*/

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);

#endif
