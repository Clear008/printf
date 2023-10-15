#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int aw_write_ups(char *awst_r);
int aw_print_int(int n);
int aw_print_cha(char c);
int aw_print_str(const char *s);
int aw_percent_sn(void);
int aw_print_bin(unsigned int n);
int aw_print_unsigned(unsigned int n);
int aw_print_octal(unsigned int n);
int aw_print_hex(unsigned int aw_n, int is_uppercase);
int aw_print_hex_recursive(unsigned int aw_n, char *aw_lookup);
int _printf(const char *format, ...);
int handle_format(const char *format, int *index, va_list args);

#endif /* MAIN_H */
