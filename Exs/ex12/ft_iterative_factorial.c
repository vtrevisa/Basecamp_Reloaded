/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:10:12 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/05/25 23:36:31 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb != 1)
	{
		r = r * (--nb);
	}
	return (r);
}	
