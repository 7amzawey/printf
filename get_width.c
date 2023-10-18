#include "main.h"
/**
 * get_width - calculates the width for printing
 * @format: the string 
 * @list: list of argumetnts.
 * @i: list of arguments to be printed
 * Return: width.
 */
int get width(const char *format, int *i, va_list list)
{
	int current_i;
	int width = 0;
	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		if (is_digit(format[current_i]))
		{
		width *= 10;
		width += format[current_i] - '0';
		break;
		}
		else if (format[current_i] == '*')
		{
		width = va_arg(list, int);
		break;
		}
		else
		{
		break;
		}
	}
	*i = current_i-1;
	return(width);
}
