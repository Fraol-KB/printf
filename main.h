#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(char s))(va_list, char *, unsigned int);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);

int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
char *fill_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);

#endif
