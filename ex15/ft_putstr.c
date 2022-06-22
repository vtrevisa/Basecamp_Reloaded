void	ft_putchar(char c);

void	ft_putstr(char *str)
{	
	int	position;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
