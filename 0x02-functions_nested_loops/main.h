int _putchar(char c)
{
	return(write(1, &c, 1));
}

void print_alphabet(void)
{
	char ch = 'k';
	_putchar(ch);
}

int next_line(void)
{
	printf("\n");
	return (0);
}
