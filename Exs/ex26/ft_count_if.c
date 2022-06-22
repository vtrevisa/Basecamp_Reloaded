int	ft_count_if(char **tab, int (*f)(char*))
{
	int	position;
	int	result;

	position = 0;
	result = 0;
	while (tab[position])
	{
		if (((*f)(tab[position])) == 1)
		{
			result++;
		}
		position++;
	}
	return (result);
}
