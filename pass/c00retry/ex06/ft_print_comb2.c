/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 06:22:27 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/12 02:48:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			y++;
			if (x != 98)
				write(1, ", ", 2);
		}
	x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
