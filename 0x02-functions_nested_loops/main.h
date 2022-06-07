
int _putchar(char c)
{
	return(write(1, &c, 1));
}

void print_alphabet(void)
{
	int p;
	
	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
}

int next_line(void)
{
	printf("\n");
	return (0);
}
