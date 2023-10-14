#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "main.h"
/**
 * _printf - a function that handle s,c and %.
 * @format:  is a character string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list awls_ag;
char *awst_r, c;
int awcount = 0;
if (format == NULL)
	return (-1);
va_start(awls_ag, format);
while (*format)
{
	if (*format != '%')
	{
		write(1, format, 1);
		awcount++;
	}
	else
	{
		format++;
		if (*format == 'c')
		{
			c = va_arg(awls_ag, int);
			write(1, &c, 1);
			awcount++;
		}
		else if (*format  == 's')
		{
			awst_r = va_arg(awls_ag, char *);
			if (awst_r == NULL)
				awst_r = "(null)";
			write(1, awst_r, strlen(awst_r);
		       awcount += strlen;
		}
		else if (*format == '%')
		{
			write(1, "%", 1);
			awcount++;
		}
	}
	format++;
}
va_end(awls_ag);
return (awcount);
}


