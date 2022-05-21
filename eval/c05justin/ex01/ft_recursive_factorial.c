/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:41:04 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 18:47:55 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("factorial 4 = %d\n", ft_recursive_factorial(4));
	printf("factorial 1 = %d\n", ft_recursive_factorial(1));
	printf("factorial 0 = %d\n", ft_recursive_factorial(0));
	printf("factorial 12 = %d\n", ft_recursive_factorial(12));
	printf("factorial -12 = %d\n", ft_recursive_factorial(-12));
}
