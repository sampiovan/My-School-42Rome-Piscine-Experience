/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:35:38 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/14 14:23:10 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (0);
	if ((array = (int *)malloc(ft_len(min, max) * sizeof(int))) == NULL)
		return (0);
	while (i < ft_len(min, max))
	{	
		array[i] = min + i;
		i++;
	}
	return (array);


}
