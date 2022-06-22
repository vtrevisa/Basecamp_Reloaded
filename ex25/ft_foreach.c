void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	position;

	position = 0;
	while (tab[position] && position < lenght)
	{
		f(tab[position]);
		position++;
	}
}
