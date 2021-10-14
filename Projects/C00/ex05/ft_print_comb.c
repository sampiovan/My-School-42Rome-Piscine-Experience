/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:06:47 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/01 09:08:01 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_insertchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char x, char y, char z, bool last)
{
	ft_insertchar(x);
	ft_insertchar(y);
	ft_insertchar(z);
	if (last)
	{
		ft_insertchar(',');
		ft_insertchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;
	bool	last;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				last = !(x == '7' && y == '8' && z == '9');
				ft_write_comb(x, y, z, last);
				z++;
			}
			y++;
		}
		x++;
	}
}
