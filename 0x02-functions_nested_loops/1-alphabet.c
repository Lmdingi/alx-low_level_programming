#include "main.h"
#include "_putchar.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
