/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiovan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:05:17 by spiovan           #+#    #+#             */
/*   Updated: 2021/10/13 12:42:03 by spiovan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"

int	main(void)
{
	printf("\nEx00/ft_iterative_factorial\n");
	printf("Expected result: 24\n");
	printf("Your result: %d\n", ft_iterative_factorial(4));
	printf("Expected result: 1\n");
    printf("Your result: %d\n", ft_iterative_factorial(0));
	printf("Expected result: 362880\n");
    printf("Your result: %d\n", ft_iterative_factorial(9));	
	
	printf("\nEx01/ft_recursive_factorial\n");
	printf("Expected result: 24\n");
    printf("Your result: %d\n", ft_recursive_factorial(4));
    printf("Expected result: 1\n");
    printf("Your result: %d\n", ft_recursive_factorial(0));
    printf("Expected result: 362880\n");
    printf("Your result: %d\n", ft_recursive_factorial(9));

	printf("\nEx02/ft_iterative_power\n");
	printf("Expected result: %f\n", pow(4, 2));
    printf("Your result: %d\n", ft_iterative_power(4, 2));
    printf("Expected result: %f\n", pow(8, 3));
    printf("Your result: %d\n", ft_iterative_power(8, 3));
    printf("Expected result: %f\n", pow(0, 0));
    printf("Your result: %d\n", ft_iterative_power(0, 0));
	printf("Expected result: %f\n", pow(10, 0));
    printf("Your result: %d\n", ft_iterative_power(10, 0));
	printf("Expected result: %f\n", pow(-7, 5));
    printf("Your result: %d\n", ft_iterative_power(-7, 5));
	printf("Expected result: %f\n", pow(-6, 0));
    printf("Your result: %d\n", ft_iterative_power(-6, 0));
	printf("Expected result: %f\n", pow(-6, -2));
    printf("Your result: %d\n", ft_iterative_power(-6, -2));

	printf("\nEx03/ft_recursive_power\n");
    printf("Expected result: %f\n", pow(4, 2));
    printf("Your result: %d\n", ft_recursive_power(4, 2));
    printf("Expected result: %f\n", pow(8, 3));
    printf("Your result: %d\n", ft_recursive_power(8, 3));
    printf("Expected result: %f\n", pow(0, 0));
    printf("Your result: %d\n", ft_recursive_power(0, 0));	
    printf("Expected result: %f\n", pow(10, 0));
    printf("Your result: %d\n", ft_recursive_power(10, 0));
	printf("Expected result: %f\n", pow(-7, 5));
    printf("Your result: %d\n", ft_recursive_power(-7, 5));
    printf("Expected result: %f\n", pow(-6, 0));
    printf("Your result: %d\n", ft_recursive_power(-6, 0));
	printf("Expected result: %f\n", pow(-6, -2));
    printf("Your result: %d\n", ft_recursive_power(-6, -2));

	printf("\nEx04/ft_fibonacci\n");
	printf("Expected result: 1\n");
	printf("Your result: %d\n", ft_fibonacci(2));
	printf("Expected result: 5\n");
    printf("Your result: %d\n", ft_fibonacci(5));
	printf("Expected result: -1\n");
    printf("Your result: %d\n", ft_fibonacci(-27));
	printf("Expected result: 0\n");
    printf("Your result: %d\n", ft_fibonacci(0));
	printf("Expected result: 21\n");
    printf("Your result: %d\n", ft_fibonacci(8));
}
