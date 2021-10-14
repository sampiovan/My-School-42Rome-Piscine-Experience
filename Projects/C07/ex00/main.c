/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:01:02 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/14 13:24:48 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strdup.c"
// char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n%s\n", argv[1], ft_strdup(argv[1]));
	return (0);
}
