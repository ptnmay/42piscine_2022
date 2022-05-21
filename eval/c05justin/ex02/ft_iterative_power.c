/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:27:07 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 18:51:44 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	initial;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	initial = nb;
	while (power > 1)
	{
		nb = nb * initial;
		power--;
	}
	return (nb);
}

int	main(void)
{
	int nb = 8;
	int power = 1 ;

	printf("%d to the %d power = %d", nb, power, ft_iterative_power(nb, power));
}
