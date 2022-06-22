void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	position;

	position = 0;
	while (str[position])
	{
		ft_putchar(str[position]);
		position++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	quant_arg;

	quant_arg = 1;

	while (quant_arg < argc)
	{
		ft_putstr(argv[quant_arg]);
		quant_arg++;
	}
	return (0);
}
