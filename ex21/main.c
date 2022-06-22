#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int index = 0;
	int min;
	int max;
	int	*qqrcoisa;

	min = 4231;
	max = -1598;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);
	
	index = 0;
	min = -1339;
	max = -1339;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = 2147483647;
	max = 2130;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -32;
	max = 32;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -63;
	max = 103;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -56;
	max = 73;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -24;
	max = 18;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -14;
	max = 146;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -77;
	max = 87;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -9;
	max = 184;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -40;
	max = 155;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);

	index = 0;
	min = -33;
	max = 93;
	qqrcoisa = ft_range(min, max);
	while(index < (max - min))
	{
		printf("%d\n", qqrcoisa[index++]);
	}
	printf("---FIM---\n");
	free(qqrcoisa);
	return (0);
}
