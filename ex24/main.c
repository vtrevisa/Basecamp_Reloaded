#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	c;
	char	h[] = "Print That!";
	int	position;
	int	j;

	c = 'a';
	ft_putchar(c);
	ft_putchar('\n');
	
	ft_putstr(h);
	ft_putchar('\n');

	i = ft_strcmp("abc","cde");
	printf("%d\n", i);

	j = ft_strlen(h);
	printf("%d\n", j);
	
	ft_swap(&i, &j);
	printf("i:%d, j:%d\n", i, j);

	return (0);
}
