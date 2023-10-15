#include <unistd.h>
#include "main.h"
int aw_print_unsigned(unsigned int aw_n)
{
	char aw_digit;
	int aw_count = 0;

	if (aw_n == 0)
	{
		aw_digit = '0';
		write(1, &aw_digit, 1);
		return (1);
	}

	if (aw_n >= 10)
	{
		aw_count += aw_print_unsigned(aw_n / 10);
	}

	aw_digit = (aw_n % 10) + '0';
	write(1, &aw_digit, 1);

	return (aw_count + 1);
}
