#include "main.h"
/**
 * main - alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
	return (0);
}
