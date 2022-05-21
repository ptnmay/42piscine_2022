/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:58:17 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/20 00:42:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	keep;

	if (nb < 0)
		return (0);
	keep = 1;
	while (nb > 0)
	{
		keep *= nb;
		nb--;
	}
	return (keep);
}
/*
#include	<stdio.h>
#include	<stdlib.h>

int	main(int argc, char **argv)
{
	printf("%i\n ", ft_iterative_factorial(atoi(argv[1])));
	printf("%i\n",argc);
}
*/
