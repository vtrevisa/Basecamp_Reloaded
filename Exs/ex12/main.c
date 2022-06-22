#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;
	
	nb = ft_iterative_factorial(-33);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(39);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(0);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(1);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(2);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(12);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(8);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(9);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(3);
	printf("%d\n", nb);
	nb = ft_iterative_factorial(6);
	printf("%d\n", nb);
	return(0);

}
