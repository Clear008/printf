#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * recursive_print - Recursively prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int recursive_print(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (aw_print_cha('0'));
	}

	if (n / 10)
	{
		count += recursive_print(n / 10);
	}
	count += aw_print_cha(n % 10 + '0');

	return (count);
}

/**
 * aw_print_int - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int aw_print_int(int n)
{
	int count = 0;

	if (n == INT_MIN)
	{
		return (aw_print_str("-2147483648"));
	}

	if (n < 0)
	{
		n = -n;
		aw_print_cha('-');
		count++;
	}

	return (count + recursive_print(n));
}

