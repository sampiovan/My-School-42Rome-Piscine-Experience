/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:01:39 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/08 10:50:52 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

int	main(void)
{
	char *str;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;
	char *str11;

	/* ------------ Ex00 ------------ */
	str = "Hello ";
	printf("\n\nEx00/ft_strlen\n");
	printf("string is \"%s\"\n", str);
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
	
	/* ------------ Ex01 ------------ */
	str = "Hello World";
	printf("\n\nEx01/ft_putstr\n");
	printf("string is: %s\n", str);
	printf("Your function: \n");
	ft_putstr(str);
	printf("\n");

	/* ------------ Ex02 ------------ */
	printf("\n\nEx02/ft_putnbr\n");
	printf(" <- Your function");
	ft_putnbr(42);
	printf(", result expected -> 42\n");
	printf("\n <- Your function");
	ft_putnbr(4242);
	printf(", result expected -> 4242\n");
	printf("\n <- Your function");
	ft_putnbr(20000706);
	printf(", result expected -> 20000706\n");
	printf("\n <- Your function");
	ft_putnbr(+2147483647);
	printf(", result expected -> 2147483647\n");
	printf("\n <- Your function");
	ft_putnbr(-2147483648);
	printf(", result expected -> -2147483648\n");
	printf("\n");

	/* ------------ Ex03 ------------ */
	printf("\n\nEx03/ft_atoi\n");
	str = " ---+--+1234ab567";
	str1 = "     ---123123ab567";
	str2 = "-   -  -1a";
	str3 = "- + -+ - + a 1 b";
	str4 = "\t -123";
	str5 = "\n -123";
	str6 = "\v -123";
	str7 = "\f -123";
	str8 = "\r -123";
	str9 = "\t\n\v\f\r\t -+-+123abc";
	str10 = "-123";
	str11 = " 123";
	printf("string is \"%s\"\n",str);
	printf("Real Answer : -1234\n\n");
	printf("Your Answer : %d\n", ft_atoi(str));
	printf("string is \"%s\"\n",str1);
	printf("Your Answer : %d\n", ft_atoi(str1));
	printf("Real Answer : -123123\n\n");
	printf("string is \"%s\"\n",str2);
	printf("Your Answer : %d\n", ft_atoi(str2));
	printf("Real Answer : 0\n\n");
	printf("string is \"%s\"\n",str3);
	printf("Your Answer : %d\n", ft_atoi(str3));
	printf("Real Answer : 0\n\n");
	printf("string is \"%s\"\n",str4);
	printf("Your Answer : %d\n", ft_atoi(str4));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str5);
	printf("Your Answer : %d\n", ft_atoi(str5));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str6);
	printf("Your Answer : %d\n", ft_atoi(str6));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str7);
	printf("Your Answer : %d\n", ft_atoi(str7));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str8);
	printf("Your Answer : %d\n", ft_atoi(str8));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str9);
	printf("Your Answer : %d\n", ft_atoi(str9));
	printf("Real Answer : 123\n\n");
	printf("string is \"%s\"\n",str10);
	printf("Your Answer : %d\n", ft_atoi(str10));
	printf("Real Answer : -123\n\n");
	printf("string is \"%s\"\n",str11);
	printf("Your Answer : %d\n", ft_atoi(str11));
	printf("Real Answer : 123\n\n");
}
