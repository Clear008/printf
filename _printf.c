#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "main.h"
/**
 * aw_write_char - write a character.
 * @c:is a string.
 * @awcount: counter
 */
void aw_write_char(char c, int *awcount)
{
	write(1, &c, 1);
	(*awcount)++;
}
/**
 * aw_write_string - write string.
 * @awst_r:  is a string.
 * @awcount: counter.
 */

void aw_write_string(char *awst_r, int *awcount)
{
int awlength = 0;
while (awst_r[awlength] != '\0')
{
	awlength++;
}
write(1, awst_r, awlength);
*awcount += awlength;
}
/**
 * _printf - a function that handle s,c and %.
 * @format:  is a character string.
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
char c, *awst_r;
int awcount = 0, awinx = 0;
va_list awls_ag;
if (format == NULL)
	return (-1);
va_start(awls_ag, format);
while (format && format[awinx])
{
	if (format[awinx] != '%')
	{
		aw_write_char(format[awinx], &awcount);
	}
	else
	{
		awinx++;
		if (format[awinx] == 'c')
		{
			c = va_arg(awls_ag, int);
			aw_write_char(c, &awcount);
		}
		else if (format[awinx]  == 's')
		{
			awst_r = va_arg(awls_ag, char *);
			if (awst_r == NULL)
				awst_r = "(null)";
			aw_write_string(awst_r, &awcount);
		}
		else if (format[awinx] == '%')
		{
			aw_write_char('%', &awcount);
		}
		else
		{
			aw_write_char('%', &awcount);
			aw_write_char(format[awinx], &awcount);
		}
	}
	awinx++;
}
va_end(awls_ag);
return (awcount);
}
