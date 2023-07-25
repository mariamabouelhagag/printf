#include "main.h"
/**
 * get_width - A function that calculates the width.
 * @format: Formatted string.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int width = 0;

	while (is_digit(format[curr_i]))
	{
		width *= 10;
		width += format[curr_i] - '0';
		curr_i++;
	}
	if (format[curr_i] == '*')
	{
		width = va_arg(list, int);
		curr_i++;
	}

	*i = curr_i - 1;

	return (width);
}
