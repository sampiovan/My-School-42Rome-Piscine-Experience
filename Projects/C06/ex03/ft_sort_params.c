/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:05:55 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/13 17:16:16 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1[i] || !s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort(char **array, int size)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (ft_strcmp(array[i], array[j]) < 0)
			{
				str = array[i];
				array[i] = array[j];
				array[j] = str;
			}
			j++;
		}
		i++;
	}
	return (array);
}

int	main(int argc, char **argv)
{
	int		i;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_len(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
