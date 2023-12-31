#include "main.h"
/**
 * handle_print - prints and argument based on its
 * type 
 * @format: formatted string
 * @list: list of arguments to be printed
 * @index: ind.
 * @buffer: Buffer array to handle print.
 * @flags: claculates active flags
 * @width: handles width.
 * @percision: gets percision
 * @size: gets size
 * Return: 1 or 2
 */
int handle_print(const char *format, int *index, va_list list, char buffer[], int flags, int width, int precision, int size)
{
	int i, unknown_len = 0, printed_chars = -1;
	format_t format_types[] = {
	{'c', print_char}, {'s', print_string}, {'%', print_percent}, {'i', print_int},
	{'d', print_int}, {'b', print_binary},{'u' print_unsigned},
	{'o', print_octal}, {'x', print_hexadecimal}, {'X', print_hexadecimal_upper}
	{'p', print_pointer}, {'S', print_non_printable}, {'r', print_reverse},
	{'R', print_rot13string},
	{'\0', NULL}
	};
	for (i = 0; format_types[i].format != '\0'; i++)
	{
		if (format[*index] == format_types[i].format)
			return (format_types[i].fn(list, buffer, flags,width, percision, size));
		if (format_types[i].format == '\0')
		{
			if (format[*index] == '\0')
				return (-1);
			unknow_len += write(1, "%%", 1);
			if (format[*index - 1] == ' ')
				unknown_len += write(1, " ", 1);
			else if (width)
			{
				--(*index);
			while (format[*index] != ' ' && format[*index] != '%')
				--(*index);
			if (format[*index] == ' ')
				--(*index);
			return (1);
			}
				unknown_len += write(1, " ", 1);
				return (unknow_len);
		}
		return (printed_chars);
		
}
