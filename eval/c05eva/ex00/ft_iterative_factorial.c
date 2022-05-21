/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:54:31 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/18 23:22:52 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans *= nb;
		nb--; //ans = ans * nb
	}
	return (ans);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
}
