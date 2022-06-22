/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:34:25 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/05/27 01:01:51 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	position;
	
	position = 0;
	if (min >= max)
		return (NULL);
	range = (int *) malloc(sizeof(min - max) + 1);
	while (min < max)
	{
		range[position] = min;
		position++;
		min++;
	}
	return (range);
}
