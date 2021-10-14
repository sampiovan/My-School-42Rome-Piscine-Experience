/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:10:25 by ncortez           #+#    #+#             */
/*   Updated: 2021/10/03 16:23:38 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_square(int line, int column, int max_l, int max_c)
{
	if (line == 0 || line == max_l)
	{
		if (column == 0 || column == max_c)
			ft_putchar('o');
		else
			ft_putchar ('-');
	}		
	else
	{	
		if (column == 0 || column == max_c)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			print_square (line, column, y - 1, x - 1);
			column ++;
		}
		ft_putchar('\n');
		line ++;
	}
}
