#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'Z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar (lowercase);
			lowercase += 1;
		}
	}
	putchar ('\n');
	return (0);
}
