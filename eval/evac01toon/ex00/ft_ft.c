/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduangke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:41:42 by pduangke          #+#    #+#             */
/*   Updated: 2022/05/17 23:19:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr )
{
	*nbr = 42;
}
#include	<stdio.h>
int	main(void)
{
	int	*nbr;
	int	value;

	nbr = &value;
	ft_ft(nbr);
	printf("%d", value);
}
