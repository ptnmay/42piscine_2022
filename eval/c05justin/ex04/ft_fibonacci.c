/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:07:40 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 18:58:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int	index = 47;

	printf("F-1 = %d\n", ft_fibonacci(-1));
	printf("F0 = %d\n", ft_fibonacci(0));
	printf("F1 = %d\n", ft_fibonacci(1));
	printf("F2 = %d\n", ft_fibonacci(2));
	printf("F3 = %d\n", ft_fibonacci(3));
	printf("F4 = %d\n", ft_fibonacci(4));
	printf("F5 = %d\n", ft_fibonacci(5));
	printf("F6 = %d\n", ft_fibonacci(6));
	printf("F7 = %d\n", ft_fibonacci(7));
	printf("F8 = %d\n", ft_fibonacci(8));
	printf("F9 = %d\n", ft_fibonacci(9));
	printf("F%d = %d\n", index, ft_fibonacci(index));
}
