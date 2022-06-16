#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFERSIZE 1025

int _putchar(char c);
char *no_match(char c);
int pow_num(int x, int y);
int _strlen(char *str);
int _printf(const char *format, ...);
char *print_char(va_list ap);
char *print_str(va_list ap);
char *print_percent(va_list ap);
char *print_int(va_list ap);
char *print_unsign(va_list ap);
char *print_binary(va_list ap);
char *print_oct(va_list ap);
char *print_rev(va_list ap);
char *print_rot13(va_list ap);
char *print_hex(unsigned int, unsigned int c);
char *print_x(va_list x);
char *print_X(va_list X);
char *print_pointer(va_list ap);
char *convert_int_to_str(char str[], int num);
char *convert_char_to_str(char c);
char *_strcpy(char *dest, char *src);
char* (*select_func(char c))(va_list);
char *string_buffer(void);
void realloc_buffer(char *buffer, int len, va_list ap);
int buffer_overflow(char *buffer, int pos);

/**
  * struct function - struct to select specifiers
  * @op: flags preceded by %
  * @func: pointer to function
  */
typedef struct function
{
	char *op;
	char *(*func)();
} functions;


#endif
