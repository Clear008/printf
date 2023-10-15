#include <unistd.h>
#include "main.h"
/**
 * aw_print_ups - function to write a string and
 * handle S custom conversion specifier
 * @awst_r: a string
 * Return: result
 */

int aw_print_ups(char *awst_r)
{
int awinx = 0;
int awcount;
char *aw_hex = "0123456789ABCDEF";
char aw_hcode[4];
if (awst_r == NULL)
{
return (-1);
}

while (awst_r[awinx] != '\0')
{
if (awst_r[awinx] < 32 || awst_r[awinx] >= 127)
{
aw_hcode[0] = '\\';
aw_hcode[1] = 'x';
aw_hcode[2] = aw_hex[(awst_r[awinx] / 16)];
aw_hcode[3] = aw_hex[(awst_r[awinx] % 16)];

write(1, aw_hcode, 4);
awcount += 4;
}
else
{
write(1, &awst_r[awinx], 1);
awcount++;
}
awinx++;
}
return (awcount);
}
