#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void aw_print_unsigned_integer(unsigned int n, int *count);
void aw_print_integer(int n, int *count);
int _printf(const char *format, ...);
void aw_write_string(char *awst_r, int *awcount);
void aw_write_char(char c, int *awcount);

#endif /* MAIN_H */
