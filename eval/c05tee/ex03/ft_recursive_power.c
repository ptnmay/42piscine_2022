/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:43:53 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/05/18 20:37:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("Power = %d\n", ft_recursive_power(46339, 46339));
}*/
