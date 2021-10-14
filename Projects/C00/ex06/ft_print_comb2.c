/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:06:47 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/01 09:09:07 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_insertcharacter(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_insertcharacter((char)(i / 10) + '0');
			ft_insertcharacter((char)(i % 10) + '0');
			ft_insertcharacter(' ');
			ft_insertcharacter((char)(j / 10) + '0');
			ft_insertcharacter((char)(j % 10) + '0');
			if (i != 98)
			{
				ft_insertcharacter(',');
				ft_insertcharacter(' ');
			}
		}
	}
}
