/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:44:45 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/05 13:39:40 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_alphanum(char letter)
{
	if (letter >= '0' && letter <= '9')
		return ('n');
	else if (letter >= 'A' && letter <= 'Z')
		return ('A');
	else if (letter >= 'a' && letter <= 'z')
		return ('a');
	else
		return ('o');
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	let;
	char	p_let;

	i = 0;
	while (str[i] != '\0')
	{
		let = str[i];
		p_let = str[i - 1];
		if ((i == 0) && (ft_is_alphanum(let) == 'a'))
		{
			str[i] = str[i] - 32;
		}
		else
		{
			if (ft_is_alphanum(let) == 'a' && ft_is_alphanum(p_let) == 'o')
				str[i] = str[i] - 32;
			else if (ft_is_alphanum(let) == 'A' && ft_is_alphanum(p_let) != 'o')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
