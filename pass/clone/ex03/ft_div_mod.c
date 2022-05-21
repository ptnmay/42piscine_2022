/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:18:27 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/14 14:33:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int a = 4;
	int b = 3;
	int div;
	int mod;
	int *d = &div;
	int *m = &mod;
	ft_div_mod(a, b, d, m);
	printf("%d\n", *d);
	printf("%d\n", *m);
}
*/
