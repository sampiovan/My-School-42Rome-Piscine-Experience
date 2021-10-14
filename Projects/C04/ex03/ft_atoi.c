/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:03:36 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/12 10:46:08 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	ft_is_space(char c)
{
	return (ft_is_in_string(c, "\t\n\v\f\r "));
}

bool	ft_is_operator(char c)
{
	return (ft_is_in_string(c, "+-"));
}

bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	number;
	int	minus_counter;

	number = 0;
	minus_counter = 1;
	while (ft_is_space(*str))
		str++;
	while (ft_is_operator(*str))
	{
		if (*str == '-')
			minus_counter *= -1;
		str++;
	}
	while (ft_is_number(*str))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * minus_counter);
}
