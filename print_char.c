#include "main.h"
/**
 * print_char - prints a char
 * @types: list a of arguments
 * @buffer: Buffer array to handle print
 * @flags: calculates active flags
 * @width: width
 * @percision: percision idiot.
 * @size: size specifier.
 * Return: Number of chars printed
 */
int print_char(va_list typers, char buffer[], int flags, int width, int percision, int size)
{
	char c = va_arg(types,int);
	return (handle_write_char(c, buffer, flags, width,precision,size));
}
