/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduangke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:59:54 by pduangke          #+#    #+#             */
/*   Updated: 2022/05/17 23:20:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{	
	*********nbr = 42;
}
#include	<stdio.h>
int	main(void)
{
	int n0;
	int *n1;
	int **n2;
	int ***n3;
	int ****n4;
	int *****n5;
	int ******n6;
	int *******n7;
	int ********n8;
	int *********nbr;

	n0 = 0;
	n1 = &n0;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	nbr = &n8;

	ft_ultimate_ft(nbr);
	printf("%d", n0);
}
