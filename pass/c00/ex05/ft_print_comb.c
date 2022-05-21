/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:48:38 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/08 14:43:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 57)
	{
		b = a + 1 ;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				if (a != b && a != c && b != a && b != c && c != a && c != b)
					write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55 || b != 56 || c != 57)
					write(1, ", ", 2);
				c++;
			}
		b++;
		}
	a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return(0);
}
*/
