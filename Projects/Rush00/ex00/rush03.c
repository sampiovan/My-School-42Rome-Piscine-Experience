/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:04:38 by gcarrai           #+#    #+#             */
/*   Updated: 2021/10/03 16:56:27 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_square(int line, int column, int max_l, int max_c)
{
	if (column == 0)
	{
		if (line == 0 || line == max_l)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (column == max_c)
	{
		if (line == 0 || line == max_l)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (line == 0 || line == max_l)
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
