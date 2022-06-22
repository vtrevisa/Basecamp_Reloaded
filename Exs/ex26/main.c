#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));
int	ft_strlen(char *tab);

int	main(void)
{	
	char	*tab[] = {"teste1", "t", "3", "4", NULL};
	printf("%d\n", ft_count_if(tab, &ft_strlen));
	return (0);
}
