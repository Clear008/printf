#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * recursive_print - Recursively prints an integer.
 * @aw_n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int recursive_print(int aw_n)
{
	int aw_count = 0;

	if (aw_n == 0)
	{
		return (aw_print_cha('0'));
	}

	if (aw_n / 10)
	{
		aw_count += recursive_print(aw_n / 10);
	}
	aw_count += aw_print_cha(aw_n % 10 + '0');

	return (aw_count);
}

/**
 * aw_print_int - Prints an integer.
 * @aw_n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int aw_print_int(int aw_n)
{
	int aw_count = 0;

	if (aw_n == INT_MIN)
	{
		return (aw_print_str("-2147483648"));
	}

	if (aw_n < 0)
	{
		aw_n = -aw_n;
		aw_print_cha('-');
		aw_count++;
	}

	return (aw_count + recursive_print(aw_n));
}

