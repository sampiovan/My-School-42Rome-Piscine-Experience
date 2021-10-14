/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:46:39 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/12 11:01:22 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

bool	ft_is_base_valid(char *str)
{
	int		i;
	int		j;
	char	*lett;

	lett = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*lett)
	{
		if (*lett == '\t' || *lett == '\n' || *lett == '\v' || *lett == '\f'
			|| *lett == '\r' || *lett == ' ' || *lett == '+' || *lett == '-')
			return (false);
		lett++;
	}
	i = 0;
	while (i < lett - str)
	{
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
}
