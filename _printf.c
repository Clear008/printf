#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that prints anything
 * @format: list of types
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
char a, *awst_r;
int awinx = 0, awcount = 0;
va_list awls_rg;
if (format == NULL)
{
return (-1);
}
va_start(awls_rg, format);
while (format && format[awinx])
{
if (format[awinx] == '%')
{
awinx++;
if (!format[awinx])
{
awcount += aw_print_cha('%');
break;
}
switch (format[awinx])
{
case 'c':
{
a = va_arg(awls_rg, int);
awcount += aw_print_cha(a);
break;
}
case 's':
{
awst_r = va_arg(awls_rg, char *);
awcount += aw_print_str(awst_r);
break;
}
case '%':
{
awcount += aw_percent_sn();
break;
}
default:
{
awcount += aw_print_cha('%');
awcount += aw_print_cha(format[awinx]);
}
}
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
