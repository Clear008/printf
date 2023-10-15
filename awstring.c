#include"main.h"
#include <unistd.h>

/**
 * aw_percent_sn - prints a percent sign
 * Return: number of characters printed
 */

int aw_percent_sn(void)
{
char percent = '%';
return (write(1, &percent, 1));
}
/**
 * aw_print_cha - prints a character
 * @a: list of arguments
 * Return: number of characters printed
 */
int aw_print_cha(char a)
{
return (write(1, &a, 1));
}
/**
 * aw_print_str - prints a string
 * @a: a pointer
 * Return: number of characters printed
 */
int aw_print_str(const char *a)
{
int count = 0;
if (a == NULL)
{
return (-1);
}
if (a)
{
for (count = 0; a[count] != '\0'; count++)
{
aw_print_cha(a[count]);
}
}
return (count);
}
