#include "main.h"
#include "_putchar.h"
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

/** int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/
void print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}
