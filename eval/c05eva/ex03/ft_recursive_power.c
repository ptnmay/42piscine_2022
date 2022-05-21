/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:48:58 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/18 23:24:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}

int	main(void)
{
	ft_recursive_power(1, -1);
}
