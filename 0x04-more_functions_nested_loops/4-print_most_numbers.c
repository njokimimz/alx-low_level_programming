#include "main.h"

/**
 * prints numbers 0-9
 *
 *
 */

void print_most_numbers(void);
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (|(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
