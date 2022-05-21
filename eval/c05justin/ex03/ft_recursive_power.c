/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:49:00 by jdaly             #+#    #+#             */
/*   Updated: 2022/05/19 18:54:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}

int	main(void)
{
	int	nb = 8;
	int	power = -2;

	printf("%d to the %d power = %d", nb, power, ft_recursive_power(nb, power)); 
}
