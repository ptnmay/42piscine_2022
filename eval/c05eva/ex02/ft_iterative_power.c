/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:28:21 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/14 19:27:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	temp = nb;
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	for (int i = -2; i < 11; i++)
		for (int j = -1; j < 5; j++)
			printf("%d^%d = %d\n", i, j, ft_iterative_power(i, j));
}
