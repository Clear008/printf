#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int handle_format(const char *format, int *index, va_list args);
int aw_print_int(int n);
int aw_print_cha(char c);
int aw_print_str(const char *s);
int aw_percent_sn(void);

#endif /* MAIN_H */
