#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int	position;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dst;
	
	dst = (char *) malloc(ft_strlen(src) + 1);
	ft_strcpy (dst, src);
	return (dst);
}
