#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

void aw_print_unsigned_integer(unsigned int n, int *count);
void aw_print_integer(int n, int *count);
int _printf(const char *format, ...);
int aw_percent_sn(void);
int aw_print_cha(char a);
int aw_print_str(char *awst_r);

#endif /* MAIN_H */
