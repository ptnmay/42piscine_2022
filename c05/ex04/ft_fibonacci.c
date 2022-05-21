/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:35:04 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/20 01:12:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
	{
		return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
	}
}
/*
#include	<stdio.h>
int	main(void)
{
	printf("%i\n", ft_fibonacci(5));
}
*/
