#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strdup(char *str);

int	main(void)
{
	char	*str;
	
	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = strdup("");
	printf("%s\n", str);
	free(str);
	
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = strdup("hello 42");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("WD2");
	printf("%s\n", str);
	free(str);
	str = strdup("WD2");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("Vju0Myk2WZb0i3f8G1XwmIp7I6mrvpgtCqYTTU7IC");
	printf("%s\n", str);
	free(str);
	str = strdup("Vju0Myk2WZb0i3f8G1XwmIp7I6mrvpgtCqYTTU7IC");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("WTLloZC2NYCVNtv3qW1lXNI588AIXYZY3");
	printf("%s\n", str);
	free(str);
	str = strdup("WTLloZC2NYCVNtv3qW1lXNI588AIXYZY3");
	printf("%s\n", str);

	str = ft_strdup("4");
	printf("%s\n", str);
	free(str);
	str = strdup("4");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("2OgfN5qQ1frVpFn1vyhzfZH0jy3hqSfbMt7aVi");
	printf("%s\n", str);
	free(str);
	str = strdup("2OgfN5qQ1frVpFn1vyhzfZH0jy3hqSfbMt7aVi");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("WyNNLvF2hc6Y2H4P1qfoB");
	printf("%s\n", str);
	free(str);
	str = strdup("WyNNLvF2hc6Y2H4P1qfoB");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("6Q9LbERKApV56GNKLDS5gYtzF4d");
	printf("%s\n", str);
	free(str);
	str = strdup("6Q9LbERKApV56GNKLDS5gYtzF4d");
	printf("%s\n", str);
	free(str);

	str = ft_strdup("kBn8t");
	printf("%s\n", str);
	free(str);
	str = strdup("kBn8t");
	printf("%s\n", str);
	free(str);
	return(0);
}
