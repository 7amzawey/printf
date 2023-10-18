#include "main.h"
/**
 * get_size - Calculates the size to cast the argument
 * @format: the bloody string
 * @i: an array of arguments
 * Return: the bloddy size
 */
int get_size(const char *format, int *i)
{
	int size = 0;
	current_i = *i + 1;

	if (format[current_i] == 'l')
	{
		size = S_LONG;
	}
	else if (format[current_i] == 'h')
	{
	size = S_SHORT;
	}
	
	if (size == 0)
	{
	*i = current_i = 1;
	}
	else
	{
	*i = current_i;
	}
return (size);
}
