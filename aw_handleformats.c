#include <stdarg.h>
#include "main.h"

/**
 * handle_format - Handles '%' in the format string.
 * @format: format string.
 * @index: Current index
 * @args: Argument list.
 *
 * Return: The number of characters printed.
 */
int handle_format(const char *format, int *index, va_list args)
{
	char a, *awst_r;
	int awcount = 0, number;

	(*index)++;
	if (!format[*index])
	{
		return (aw_print_cha('%'));
	}
	switch (format[*index])
	{
		case 'c':
			a = va_arg(args, int);
			awcount += aw_print_cha(a);
			break;
		case 's':
			awst_r = va_arg(args, char *);
			awcount += aw_print_str(awst_r);
			break;
		case 'i':
		case 'd':
			number = va_arg(args, int);
			awcount += aw_print_int(number);
			break;
		case 'b':
		{
			unsigned int binary_num = va_arg(args, unsigned int);

			awcount += aw_print_bin(binary_num);
			break;
		}
		case '%':
			awcount += aw_percent_sn();
			break;
		case 'u':
			awcount += aw_print_unsigned(va_arg(args, unsigned int));
			break;
		case 'o':
			awcount += aw_print_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			awcount += aw_print_hex(va_arg(args, unsigned int), 0);
			break;
		case 'X':
			awcount += aw_print_hex(va_arg(args, unsigned int), 1);
			break;
		case 'S':
			awcount += aw_print_ups(va_arg(args, char *));
			break;
		default:
			awcount += aw_print_cha('%');
			awcount += aw_print_cha(format[*index]);
	}
	return (awcount);
}
