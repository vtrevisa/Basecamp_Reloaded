#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	r;

	r = ft_strcmp("amora", "abacaxi");
	printf("%d\n", r);
	r = strcmp("amora", "abacaxi");
	printf("%d\n", r);
	
	r = ft_strcmp("carro", "carro");
	printf("%d\n", r);
	r = strcmp("carro", "carro");
	printf("%d\n", r);
	
	r = ft_strcmp("carra", "carro");
        printf("%d\n", r);
	r = strcmp("carra", "carro");
        printf("%d\n", r);

	r = ft_strcmp("cerra", "corra");
        printf("%d\n", r);
	r = strcmp("cerra", "corra");
        printf("%d\n", r);

	r = ft_strcmp("aaaaab", "aaaaak");
        printf("%d\n", r);
	r = strcmp("aaaaab", "aaaaak");
        printf("%d\n", r);
	return (0);
}
