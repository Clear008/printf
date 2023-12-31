#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that prints anything
 * @format: list of types
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
int awinx = 0, awcount = 0;
va_list awls_rg;
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

va_start(awls_rg, format);
while (format && format[awinx])
{
if (format[awinx] == '%')
{
awcount += handle_format(format, &awinx, awls_rg);
}
else
{
awcount += aw_print_cha(format[awinx]);
}
awinx++;
}
va_end(awls_rg);
return (awcount);
}
