/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:19:06 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/14 14:21:28 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"

int	main(int argc, char **argv)
{
	int	i;
	int	min;
	int	max;
	int *arr;

	if (argc < 2)
		return (0);
	min = argv[1][0] - '0';
	max = argv[2][0] - '0';
	arr = ft_range(min, max);
	printf("Input: %i %i\n", min, max);
	if (arr == 0)
	{
		printf("Null array, invalid input\n");
		return (0);
	}

	i = 0;
	while (i < max - min)
	{
		printf("%i ", arr[i]);
		i++;
	}
	return (0);
}
