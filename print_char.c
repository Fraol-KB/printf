#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_char(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handle_buf(buf, c, ibuf);

	return (1);
}
