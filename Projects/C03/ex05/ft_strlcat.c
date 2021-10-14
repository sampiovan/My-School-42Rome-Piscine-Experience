/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:00:19 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/08 10:08:03 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count_d;
	unsigned int	count_s;

	count_d = ft_len(dest);
	count_s = ft_len(src);
	i = 0;
	j = count_d;
	if (size <= count_d)
		return (size + count_s);
	else
	{
		while (j < (size - 1) && src[i] != '\0')
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
		return (count_d + count_s);
	}
}
