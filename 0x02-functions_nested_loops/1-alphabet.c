#include "main.h"
/**
 * main - alphabet in lowercase
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
}
