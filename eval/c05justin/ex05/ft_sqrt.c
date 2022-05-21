/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:15:14 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 23:40:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (nb > i && i * i < nb && i <= 46340)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int	main(void)
{
	int	n;
	int	result;

	n = 2147395600;
	result = ft_sqrt(n);
	printf("square root of %d = %d\n", n, result);
	printf("square root of %d = %d\n", 1, ft_sqrt(1));
	printf("square root of %d = %d\n", 4, ft_sqrt(4));
	printf("square root of %d = %d\n", -1, ft_sqrt(-1));
}

