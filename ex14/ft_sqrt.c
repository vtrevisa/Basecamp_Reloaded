/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:02:50 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/05/25 23:56:01 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	result;
	int	adder;

	result = 1;
	adder = 0;
	while (nb > 0)
	{
		nb = nb - (result + adder);
		result++;
		adder++;
	}
	if (nb < 0)
		return (0);
	return (result - 1);
}
