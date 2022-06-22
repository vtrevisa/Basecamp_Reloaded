void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int tab);

int	main(void)
{
	int	tab[] = {256, 356, 33, 524, 858};
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
