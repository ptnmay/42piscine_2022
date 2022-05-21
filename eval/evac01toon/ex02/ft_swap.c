/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduangke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:02:22 by pduangke          #+#    #+#             */
/*   Updated: 2022/05/17 23:21:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	number;

	number = *a;
	*a = *b;
	*b = number;
}
#include	<stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("a = %d\n",a);
	printf("b = %d",b);
}
