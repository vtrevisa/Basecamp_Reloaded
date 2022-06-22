#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;

	ft_div_mod(10, 2, &a, &b);
	printf("%d, %d\n", a, b);
	return(0);

}
