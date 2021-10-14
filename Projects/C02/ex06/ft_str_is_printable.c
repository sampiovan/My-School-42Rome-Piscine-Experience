/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:21:51 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/04 17:24:59 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	lett;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			lett = str[i];
			if (!(lett >= 32 && lett <= 127))
				return (0);
			i++;
		}
	}
	return (1);
}
