int	ft_recursive_factorial(int nb)
{
	int	r;
	
	r = nb;
	if(nb < 0 || nb > 12) 
		r = 0;
	if (nb == 0)
		return(1);
	else if(nb > 1)
		r = r * ft_recursive_factorial(nb - 1);
	return(r);
}	
