/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:21:37 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/03 16:49:39 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_square(int line, int column, int max_l, int max_c)
{
	if (line == 0)
	{
		if (column == 0 || column == max_c)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (column == 0 || column == max_c)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == max_c)
			ft_putchar('B');
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
			print_square(line, column, y - 1, x - 1);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
