#include "main.h"

int aw_print_hex_recursive(unsigned int aw_n, char *aw_lookup)
{
	if (aw_n == 0)
		return (0);

	int aw_count = aw_print_hex_recursive(aw_n / 16, aw_lookup);

	char aw_c = aw_lookup[aw_n % 16];
	write(1, &aw_c, 1);

	return (aw_count + 1);
}

int aw_print_hex(unsigned int aw_n, int is_uppercase)
{
	char aw_digits[] = "0123456789abcdef";
	char aw_digits_upper[] = "0123456789ABCDEF";
	char *aw_lookup;

	if (is_uppercase)
		aw_lookup = aw_digits_upper;
	else
		aw_lookup = aw_digits;

	if (aw_n == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	return (aw_print_hex_recursive(aw_n, aw_lookup));
}
