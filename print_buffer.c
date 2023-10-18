#include "main.h"
/**
 * print_buffer - Printf buffer to stdout
 * @buffer: is an array of chars that the buffer will 
 * @buff_index: is a pointer pointing to the buffer char
 */
void print_buffer(char buffer[], int *buffer_index)
{
	int i;
		
	for (i = 0; i <= *buffer_index; i++)
	{
		write(1, &buffer[i], 1);
	}
	*buffer_index = 0;
}
