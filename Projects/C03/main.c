/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:12:22 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/07 16:59:39 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	char	*str7;
	char	*str8;
	char	*str9;
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;
	char 	*a;
	char 	*b;
	char 	*c;
	char 	*result_c;
	char 	*result_ft;

	/* ------------ Exercise 00 ------------ */
	str1 = "Hello";
	str2 = "Hello";
	str3 = "";
	str4 = "";
	str5 = "abcdef";
	str6 = "abcavadakedavra";
	str7 = " gt";
	str8 = "zzz";
	str9 = "zzzzzz";
	printf("\n\nEx00/ft_strcmp\n");
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
	printf("c  : %d\n", strcmp(str3, str4));
	printf("ft : %d\n", ft_strcmp(str3, str4));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str5, str3));
	printf("ft : %d\n", ft_strcmp(str5, str3));
	printf("c  : %d\n", strcmp(str5, str6));
	printf("ft : %d\n", ft_strcmp(str5, str6));
	printf("c  : %d\n", strcmp(str6, str7));
	printf("ft : %d\n", ft_strcmp(str6, str7));
	printf("c  : %d\n", strcmp(str7, str8));
	printf("ft : %d\n", ft_strcmp(str7, str8));
	printf("c  : %d\n", strcmp(str8, str9));
    printf("ft : %d\n", ft_strcmp(str8, str9));
	printf("c  : %d\n", strcmp(str9, str8));
    printf("ft : %d\n", ft_strcmp(str9, str8));

	/* ------------ Exercise 01 ------------ */
	str1 = "Helo";
	str2 = "Helloo";
	str3 = "abcd";
	str4 = "Hello World";
	str5 = "Hell";
	printf("\n\nEx01/ft_strncmp\n");
	printf("===CASE1===\n");
	printf("n = 3, Comparison between \"%s\" and \"%s\" \n", str1, str2);
	printf("c  : %d\n", strncmp(str1, str2, 3));
	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
	printf("===CASE2===\n");
	printf("n = 4, Comparison between \"%s\" and \"%s\" \n", str1, str3);
	printf("c  : %d\n", strncmp(str1, str3, 4));
	printf("ft : %d\n", ft_strncmp(str1, str3, 4));
	printf("===CASE3===\n");
	printf("n = 300, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 300));
	printf("ft : %d\n", ft_strncmp(str4, str5, 300));
	printf("===CASE4===\n");
	printf("n = 2, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 2));
	printf("ft : %d\n", ft_strncmp(str4, str5, 2));
	printf("===CASE5===\n");
	printf("n = 0, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 0));
	printf("ft : %d\n", ft_strncmp(str4, str5, 0));
	printf("===CASE6===\n");
	printf("n = 4294967295, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 4294967295));
	printf("ft : %d\n", ft_strncmp(str4, str5, 4294967295));

	/* ------------ Exercise 02 ------------ */
	str_base = "Hello";
	src = " World";
	index = 0;
	printf("\n\nEx02/ft_strcat\n");
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strcat(dest, src));
	printf("ft : %s$\n", ft_strcat(dest2, src));

	/* ------------ Exercise 03 ------------ */
	str_base = "Hello";
	src = " World";
	index = 0;
	printf("\n\nEx03/ft_strncat\n");
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src, 4));

	/* ------------ Exercise 04 ------------ */
	a = "Foo Bar Baz";
	b = "Bar";
	c = "foo bar";
	printf("\n\nEx04/ft_strstr\n");
	result_c = strstr(a, b);
	result_ft = ft_strstr(a, b);
	printf("=====CASE1=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo");
	result_ft = ft_strstr(a, "foo");
	printf("=====CASE2=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "bar");
	result_ft = ft_strstr(a, "bar");
	printf("=====CASE3=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "");
	result_ft = ft_strstr(a, "");
	printf("=====CASE4=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo bar over");
	result_ft = ft_strstr(a, "foo bar over");
	printf("=====CASE5=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo bar");
	result_ft = ft_strstr(a, "foo bar");
	printf("=====CASE6=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr("", "foo bar over");
	result_ft = ft_strstr("", "foo bar over");
	printf("=====CASE7=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr("", "");
	result_ft = ft_strstr("", "");
	printf("=====CASE8=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);

	/* ------------ Exercise 05 ------------ */
	str_base = "Hello";
	src = " World";
	index = 0;
	printf("\n\nEx05/ft_strlcat\n");
	while (index < 14)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("=====CASE1=====\n");
	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 0), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 0), dest2);
	printf("=====CASE2=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 1), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 1), dest2);
	printf("=====CASE3=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 4), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 4), dest2);
	printf("=====CASE4=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 5), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 5), dest2);
	printf("=====CASE5=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 6), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 6), dest2);
	printf("=====CASE6=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 8), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 8), dest2);
	printf("=====CASE7=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 10), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 10), dest2);
	printf("=====CASE8=====\n");
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 13), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 13), dest2);
}
