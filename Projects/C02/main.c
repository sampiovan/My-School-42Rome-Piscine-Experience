/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:24:52 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/05 14:31:41 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"

int	main(void)
{
	char	*src;
	char	dest[12];
	char	*src2;
	char	dest2[20];
	char	*str_valid;
	char	*str_invalid;
	int		index;
	int		index1;
	char	*str_base;
	char	str_upper[6];
	char	str_lower[6];
	char	*str_base1;
	char	str_cap[36];
	char	str_cap1[61];

	src = "Hello World";
	printf("\nEx00/ft_strcpy\n");
	printf("base  : %s\n", src);
	strcpy(dest, src);
	printf("cpy   : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy: %s\n", dest);

	src2 = "               a     ";
	printf("\nEx01/ft_strncpy\n");
	printf("base  : %s\n", src2);
	strncpy(dest2, src2, 16);
	printf("cpy   : %s\n", dest2);
	ft_strncpy(dest2, src2, 16);
	printf("ft_cpy: %s\n", dest2);

	str_valid = "Hello";
	str_invalid = "He[l0";
	printf("\nEx02/ft_str_is_alpha\n");
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));

	str_valid = "123456";
	str_invalid = "123A56";
	printf("\nEx03/ft_str_is_numeric\n");
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));

	str_valid = "hello";
	str_invalid = "hellO";
	printf("\nEx04/ft_str_is_lowercase\n");
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));

	str_valid = "HELLO";
    str_invalid = "HELLo";
    printf("\nEx05/ft_str_is_uppercase\n");
    printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
    printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));

	str_valid = "Hell0";
    str_invalid = "hello\n";
    printf("\nEx06/ft_str_is_printable\n");
    printf("should be 1: %d\n", ft_str_is_printable(str_valid));
    printf("should be 0: %d\n", ft_str_is_printable(str_invalid));

	str_base = "heLl0";
	index = 0;
	while (index < 6)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("\nEx07/ft_strlowcase\n");
	printf("should be normal    : %s\n", str_base);
	printf("should be upper case: %s\n", str_upper);

	str_base = "HELl0";
	index = 0;
	while (index < 6)
	{
		str_lower[index] = str_base[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("\nEx08/ft_strlowcase\n");
	printf("should be normal    : %s\n", str_base);
	printf("should be lower case: %s\n", str_lower);

	str_base1 = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	index = 0;
	index1 = 0;
	while (index < 37)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	while (index1 < 61)
	{
		str_cap1[index1] = str_base1[index1] + 0;
		index1++;
	}
	ft_strcapitalize(&str_cap[0]);
	ft_strcapitalize(&str_cap1[0]);
	printf("\nEx09/ft_strcapitalize\n");
	printf("=== CASE1 ===\n");
	printf("base 		: %s\n", str_base);
	//printf("capitalized : %s\n", str_lower);
	printf("changed		: %s\n", str_cap);
	printf("=== CASE2 ===\n");
	printf("base 		: %s\n", str_base1);
	printf("changed		: %s\n", str_cap1);
}
