/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:06:11 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/14 19:47:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	power;

	power = nb / 2;
	if (power > 46340)
		power = 46340;
	while (power > 0)
	{
		if (nb == power * power)
			return (power);
		power--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(-2147302921));
}
