
int _putchar(char c)
{
	return(write(1, &c, 1));
}

void print_alphabet(void)
{
	int pt;
	
	for (pt = 'a'; pt <= 'z'; pt++)
	{
		_putchar(pt);
	}
}

int next_line(void)
{
	printf("\n");
	return (0);
}
