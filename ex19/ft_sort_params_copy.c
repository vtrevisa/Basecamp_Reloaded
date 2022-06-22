/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params_copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:16:19 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/05/24 01:22:06 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
	{
	int	position;

	position = 0;
	while (str[position])
	{
		ft_putchar(str[position]);
		position++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	position;

	position = 0;
	while (s1[position] && s1[position] == s2[position])
	{
		position++;
	}
	if (s1[position] > s2[position])
		return (1);
	else if (s1[position] < s2[position])
		return (-1);
	else
		return (0);
}

void	ft_strswp(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	ft_print_params(int argc, char **argv)
{
	int	quant_arg;

	quant_arg = 1;
	while (quant_arg < argc)
	{
		ft_putstr(argv[quant_arg]);
		ft_putchar('\n');
		quant_arg++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	referential;
	int	sample;

	referential = 1;
	sample = 1;
	while (referential < argc)
	{
		while (sample < argc)
		{
			if (ft_strcmp(argv[referential], argv[sample]) > 0)
			{	
				ft_strswp(&argv[referential], &argv[sample]);
			}
			else
				sample++;
		}
		referential++;
		sample = referential;
	}
	ft_print_params(argc, argv);
	return (0);
}
