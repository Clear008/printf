#include <unistd.h>
#include "main.h"

/**
 * aw_print_bin - Converts unsigned int to binary
 * @aw_n: unsigned int
 * Return: The number of d printed.
 */

int aw_print_bin(unsigned int aw_n)
{
	char aw_c;
	int aw_count = 0;

	if (aw_n > 1)
		aw_count += aw_print_bin(aw_n / 2);

	aw_c = (aw_n % 2) + '0';
	write(1, &aw_c, 1);

	return (aw_count + 1);
}
