#include "main.h"

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
