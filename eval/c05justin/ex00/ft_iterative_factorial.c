/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:21:07 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 22:28:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)

{
	int	product;

	product = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		product = product * nb;
		nb--;
	}	
	return (product);
}

int main(void)
{
	printf("factorial 4 = %d\n", ft_iterative_factorial(4));
	printf("factorial 1 = %d\n", ft_iterative_factorial(1));
	printf("factorial 0 = %d\n", ft_iterative_factorial(0));
	printf("factorial 13 = %d\n", ft_iterative_factorial(13));
	printf("factorial 12 = %d\n", ft_iterative_factorial(12));
	printf("factorial -13 = %d\n", ft_iterative_factorial(-13));
}
