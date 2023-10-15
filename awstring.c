#include"main.h"
#include <unistd.h>

/**
 * aw_percent_sn - prints a percent sign
 * Return: number of characters printed
 */

int aw_percent_sn(void)
{
char awpercent = '%';
return (write(1, &awpercent, 1));
}
/**
 * aw_print_cha - prints a character
 * @awa: list of arguments
 * Return: number of characters printed
 */
int aw_print_cha(char awa)
{
return (write(1, &awa, 1));
}
/**
 * aw_print_str - prints a string
 * @awa: a pointer
 * Return: number of characters printed
 */
int aw_print_str(const char *awa)
{
int awcount = 0;
if (awa == NULL)
{
return (-1);
}
if (awa)
{
for (awcount = 0; awa[awcount] != '\0'; awcount++)
{
aw_print_cha(awa[awcount]);
}
}
return (awcount);
}
