#include"main.h"

/**
 * aw_percent_sn - prints a percent sign
 * Return: number of characters printed
 */

int aw_percent_sn(void)
{
putchar('%');
return (1);
}
/**
 * aw_print_cha - prints a character
 * @a: list of arguments
 * Return: number of characters printed
 */
int aw_print_cha(char a)
{
putchar(a);
return (1);
}
/**
 * aw_print_str - prints a string
 * @awst_r: list of arguments
 * Return: number of characters printed
 */
int aw_print_str(const char *awst_r)
{
	int aw_length = 0;
if (awst_r == NULL)
{
return (-1);
}
while (awst_r[aw_length] != '\0')
{
putchar(awst_r[aw_length]);
aw_length++;
}

return (aw_length);
}

